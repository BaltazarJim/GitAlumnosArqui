/*
 * File:   External interrupt 0
 * Author: Baltazar Jiménez
 *
 * Created on April 29th, 2025
 */

    .include "p33fj32mc202.inc"

    ; _____________________Configuration Bits_____________________________
    ;User program memory is not write-protected
    #pragma config __FGS, GWRP_OFF & GSS_OFF & GCP_OFF
    
    ;Internal Fast RC (FRC)
    ;Start-up device with user-selected oscillator source
    #pragma config __FOSCSEL, FNOSC_FRC & IESO_ON
    
    ;Both Clock Switching and Fail-Safe Clock Monitor are disabled
    ;XT mode is a medium-gain, medium-frequency mode that is used to work with crystal
    ;frequencies of 3.5-10 MHz //Datacheet
    #pragma config __FOSC, FCKSM_CSECME & POSCMD_XT
    
    ;Watchdog timer enabled/disabled by user software
    #pragma config __FWDT, FWDTEN_OFF
    
    ;POR Timer Value
    #pragma config __FPOR, FPWRT_PWR128
   
    ; Communicate on PGC1/EMUC1 and PGD1/EMUD1
    ; JTAG is Disabled
    #pragma config __FICD, ICS_PGD1 & JTAGEN_OFF

;..............................................................................
;Program Specific Constants (literals used in code)
;..............................................................................

    .equ SAMPLES, 64         ;Number of samples



;..............................................................................
;Global Declarations:
;..............................................................................

    .global _wreg_init       ;Provide global scope to _wreg_init routine
                                 ;In order to call this routine from a C file,
                                 ;place "wreg_init" in an "extern" declaration
                                 ;in the C file.

    .global __reset          ;The label for the first line of code.
    
    .global __INT0Interrupt
    .global __INT1Interrupt
    .global __INT2Interrupt
;..............................................................................
;Constants stored in Program space
;..............................................................................

    .section .myconstbuffer, code
    .palign 2                ;Align next word stored in Program space to an
                                 ;address that is a multiple of 2
ps_coeff:
    .hword   0x0002, 0x0003, 0x0005, 0x000A




;..............................................................................
;Uninitialized variables in X-space in data memory
;..............................................................................

    .section .xbss, bss, xmemory
x_input: .space 2*SAMPLES        ;Allocating space (in bytes) to variable.



;..............................................................................
;Uninitialized variables in Y-space in data memory
;..............................................................................

    .section .ybss, bss, ymemory
y_input:  .space 2*SAMPLES




;..............................................................................
;Uninitialized variables in Near data memory (Lower 8Kb of RAM)
;..............................................................................

    .section .nbss, bss, near
VAR1:     .space 2               ;Example of allocating 1 word of space for
                                 ;variable "var1".




;..............................................................................
;Code Section in Program Memory
;..............................................................................

.text                             ;Start of Code section
__reset:
    MOV #__SP_init, W15       ;Initalize the Stack Pointer
    MOV #__SPLIM_init, W0     ;Initialize the Stack Pointer Limit Register
    MOV W0, SPLIM
    NOP                       ;Add NOP to follow SPLIM initialization

    CALL _wreg_init           ;Call _wreg_init subroutine
                                  ;Optionally use RCALL instead of CALL




        ;<<insert more user code here>>


	SETM    AD1PCFGL		;PORTB AS DIGITAL

	MOV	#0X00FF,    W0		;PORTB<15:8> AS OUTPUTS
	MOV	W0,	    TRISB	;PORTB<7:0> AS INPUTS
	
	CALL    CONF_INT0		; INT0 ATTACHED AT RB7 (PIN 16)
	CALL	CONF_INT1		; INT1 ATTACHED TO RB6... RP6 (PIN 15)
	CALL	CONF_INT2        		    
	
	MOV	#700,	    W7		;ARGUMENT FOR DELAY ms
	CLR	W0
	CLR	VAR1
done:				;INFINITE LOOP          
	INC	VAR1
	MOV	VAR1,	    W0
	SL	W0,	    #8,		W0
	MOV	W0,	    PORTB  
	
	CALL    Delay1ms    

BRA	done


    Delay250msec:			; Use FRC = 7.37 MHz as FOSC
	    PUSH    W7
	    PUSH    W8
	    MOV	    #1845,	    W7
	    LOOP1:
	    CP0	    W7			;(1 Cycle)
	    BRA	    Z,	    END_DELAY	;(1 Cycle if not jump)
	    DEC	    W7,	    W7		;(1 Cycle)

	    MOV	    #100,	    W8		;(1 Cycle)
	    LOOP2:
	    DEC	    W8,	    W8		;(1 Cycle)
	    CP0	    W8			;(1 Cycle)
	    BRA	    Z,	    LOOP1	;(1 Cycle if not jump)
	    BRA	    LOOP2		;(2 Cycle if jump)

    END_DELAY:
	    NOP
	    POP	    W8
	    POP	    W7
	    RETURN
	
    Delay1ms:
	    PUSH    W8
	    PUSH    W7			;Argument for deley in ms
	    	   
	LABEL2:    
	    MOV	    #921,   W8		; 7.37exp6 / (2 * 4 *1000) = 921
	LABEL1:
	    DEC	    W8,	    W8		;(1 Cycle)
	    CP0	    W8			;(1 Cycle)
	    BRA	    NZ,	    LABEL1	;(2 Cycle if not jump)
					; total of 4 cycles
	    DEC	    W7,	    W7
	    CP0	    W7
	    BRA	    NZ,	    LABEL2
	    POP	    W7
	    POP	    W8
    RETURN
	
	
	
    
    ;******************************************************************************
;    The following steps describe how to configure a source of interrupt:
;******************************************************************************		    
;1. Set the NSTDIS Control bit (INTCON1<15>) if nested interrupts are not desired.
;2. Select the user assigned priority level for the interrupt source by writing the control bits in
;the appropriate IPCx Control register. The priority level will depend on the specific
;application and type of interrupt source. If multiple priority levels are not desired, the IPCx
;register control bits for all enabled interrupt sources may be programmed to the same
;non-zero value.
;3. Clear the interrupt flag status bit associated with the peripheral in the associated IFSx
;Status register.
;4. Enable the interrupt source by setting the interrupt enable control bit associated with the
;source in the appropriate IECx Control register.
    
;    Note: At a device Reset, the IPC registers are initialized, such that all user interrupt
;sources are assigned to priority level 4.
    
    CONF_INT0:
    BSET    INTCON1,	#NSTDIS		;nested interrupts are not desired.
    
    IPC0bits.INT1IP = 7; 
    ;BCLR    IPC0,	#INT0IP0	;PRIORITY LEVEL: 4
    ;BCLR    IPC0,	#INT0IP1
    ;BSET    IPC0,	#INT0IP2
    
    BCLR    IFS0,	#INT0IF		;Clear the interrupt flag status bit
    
    BCLR    INTCON2,	#INT0EP		;0 = Interrupt on positive edge
    
    BSET    IEC0,	#INT0IE		;Enable the interrupt source
    
    RETURN
    
    
    CONF_INT1:    
	
	BSET    INTCON1,    #NSTDIS		;nested interrupts are not desired.

	BSET    IPC5,	    #INT1IP0	;PRIORITY LEVEL: 4
	BSET    IPC5,	    #INT1IP1
	BSET    IPC5,	    #INT1IP2

	BCLR    IFS1,	    #INT1IF		;Clear the interrupt flag status bit
	BCLR    INTCON2,    #INT1EP		;0 = Interrupt on positive edge	
	
	RPINR0bits.INT1R = 6
;	BCLR	RPINR0,	    #INT1R4	; INT1 ATTACHED TO RB6... RP6 (PIN 15)
;	BCLR	RPINR0,	    #INT1R3
;	BCLR	RPINR0,	    #INT1R2
;	BCLR	RPINR0,	    #INT1R1
;	BSET	RPINR0,	    #INT1R0
	
	BSET    IEC1,	    #INT1IE		;Enable the interrupt source
    RETURN
    
    
    CONF_INT2:
	
	BSET    INTCON1,	#NSTDIS		;nested interrupts are not desired.

	BSET    IPC7,	#INT2IP0	;PRIORITY LEVEL: 4
	BSET    IPC7,	#INT2IP1
	BSET    IPC7,	#INT2IP2

	BCLR    IFS1,	#INT2IF		;Clear the interrupt flag status bit

	BCLR    INTCON2,	#INT2EP		;0 = Interrupt on positive edge
	
	BCLR	RPINR1,	    #INT2R4	; INT2 ATTACHED TO RB5... RP5 (PIN 14)
	BCLR	RPINR1,	    #INT2R3
	BCLR	RPINR1,	    #INT2R2
	BSET	RPINR1,	    #INT2R1
	BCLR	RPINR1,	    #INT2R0

	BSET    IEC1,	#INT2IE		;Enable the interrupt source
    
    RETURN
	
    
;******************************************************************************
;    Interrupt Service Routine ISR
;******************************************************************************
;The method that is used to declare an ISR and initialize the IVT with the correct vector address
;will depend on the programming language (i.e., C or assembler) and the language development
;tool suite that is used to develop the application. In general, the user must clear the interrupt flag
;in the appropriate IFSx register for the source of interrupt that the ISR handles. Otherwise, the
;ISR will be re-entered immediately after exiting the routine. If the ISR is coded in assembly
;language, it must be terminated using a RETFIE instruction to unstack the saved PC value, SRL
;value, and old CPU priority level.
    __INT0Interrupt:
    PUSH.S
    PUSH    PORTB		    ;keep safe PORTB    
    CLR	    PORTB
    
    COM	    PORTB    
    CALL    Delay250msec
    COM	    PORTB    
    CALL    Delay250msec
    COM	    PORTB    
    CALL    Delay250msec
    COM	    PORTB    
    CALL    Delay250msec
    COM	    PORTB    
    CALL    Delay250msec
    COM	    PORTB    
    CALL    Delay250msec    
    
    BCLR    IFS0,	#INT0IF	    ;the user must clear the interrupt flag
    POP	    PORTB			;get the original value
    POP.S
    RETFIE
    
    
     __INT1Interrupt:
    PUSH.S
    PUSH    PORTB		    ;keep safe PORTB    
    PUSH    W7
    CLR	    PORTB

    
    MOV	    #300,   W7
    BSET    PORTB,  #8
    CALL    Delay1ms
    DO	    #6, HERE
    SL	    PORTB
    CALL    Delay1ms
    HERE:   NOP
        
    POP	    W7
    BCLR    IFS1,	#INT1IF	    ;the user must clear the interrupt flag  
    POP	    PORTB			;get the original value
    POP.S
    RETFIE

__INT2Interrupt:
    PUSH.S
    PUSH    PORTB		    ;keep safe PORTB    
    CLR	    PORTB
    
    BSET    PORTB,  #10
    CALL    Delay250msec
    BCLR    PORTB,  #10   
    CALL    Delay250msec
    BSET    PORTB,  #10
    CALL    Delay250msec
    BCLR    PORTB,  #10  
    CALL    Delay250msec
    BSET    PORTB,  #10
    CALL    Delay250msec
    BCLR    PORTB,  #10    
    CALL    Delay250msec
        
    BCLR    IFS1,	#INT2IF	    ;the user must clear the interrupt flag
    POP	    PORTB			;get the original value
    POP.S
    RETFIE        




;..............................................................................
;Subroutine: Initialization of W registers to 0x0000
;..............................................................................

_wreg_init:
    CLR W0
    MOV W0, W14
    REPEAT #12
    MOV W0, [++W14]
    CLR W14
    RETURN




;--------End of All Code Sections ---------------------------------------------

.end                               ;End of program code in this file
