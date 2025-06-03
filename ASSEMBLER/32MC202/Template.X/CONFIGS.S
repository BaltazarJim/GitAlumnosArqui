 .include "p33fj32mc202.inc"

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
    
    BCLR    IPC0,	#INT0IP0	;PRIORITY LEVEL: 4
    BCLR    IPC0,	#INT0IP1
    BSET    IPC0,	#INT0IP2
    
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
	
	BCLR	RPINR0,	    #INT1R4	; INT1 ATTACHED TO RB6... RP6 (PIN 15)
	BCLR	RPINR0,	    #INT1R3
	BSET	RPINR0,	    #INT1R2
	BSET	RPINR0,	    #INT1R1
	BCLR	RPINR0,	    #INT1R0
	
	BSET    IEC1,	    #INT1IE		;Enable the interrupt source
    RETURN
    
    
    CONF_INT2:
	
	BSET    INTCON1,	#NSTDIS		;nested interrupts are not desired.

	BCLR    IPC7,	#INT2IP0	;PRIORITY LEVEL: 4
	BCLR    IPC7,	#INT2IP1
	BSET    IPC7,	#INT2IP2

	BCLR    IFS1,	#INT2IF		;Clear the interrupt flag status bit

	BCLR    INTCON2,	#INT2EP		;0 = Interrupt on positive edge
	
	BCLR	RPINR1,	    #INT2R4	; INT2 ATTACHED TO RB5... RP5 (PIN 14)
	BCLR	RPINR1,	    #INT2R3
	BSET	RPINR1,	    #INT2R2
	BCLR	RPINR1,	    #INT2R1
	BSET	RPINR1,	    #INT2R0

	BSET    IEC1,	#INT2IE		;Enable the interrupt source
    
    RETURN