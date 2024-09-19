;==========================================================================
;  PIC33FJ32MC202 Standard Assembly Include File
; 
;  (c) Copyright 2022 Microchip Technology, All rights reserved
;  Part support version 2.00.A(24-Jan-2022)
; 
 ; This software is developed by Microchip Technology Inc. and its
 ; subsidiaries ("Microchip").
 ; 
 ; Redistribution and use in source and binary forms, with or without
 ; modification, are permitted provided that the following conditions are 
 ; met:
 ; 
 ; 1.      Redistributions of source code must retain the above copyright
 ;         notice, this list of conditions and the following disclaimer.
 ; 2.      Redistributions in binary form must reproduce the above 
 ;         copyright notice, this list of conditions and the following 
 ;         disclaimer in the documentation and/or other materials provided 
 ;         with the distribution. Publication is not required when
 ;         this file is used in an embedded application.
 ; 3.      Microchip's name may not be used to endorse or promote products
 ;         derived from this software without specific prior written 
 ;         permission.
 ; 
 ; THIS SOFTWARE IS PROVIDED BY MICROCHIP "AS IS" AND ANY EXPRESS OR IMPLIED
 ; WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 ; MERCHANTABILITY AND FITNESS FOR PURPOSE ARE DISCLAIMED. IN NO EVENT 
 ; SHALL MICROCHIP BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 ; EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING BUT NOT LIMITED TO
 ; PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA OR PROFITS;
 ; OR BUSINESS INTERRUPTION) HOWSOEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 ; WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR 
 ; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ; ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 ; 
 ;

.ifndef __33FJ32MC202_INC
.equ __33FJ32MC202_INC,1
.NOLIST

;==========================================================================
;  This header file defines configurations, registers, and other useful
;  bits of information for the PIC33FJ32MC202 microcontroller.  These names
;  are taken to match the data sheets as closely as possible.
;
;  Note that the processor must be selected before this file is included.
;  The processor may be selected the following ways:
;
;       1. Command line switch:
;               C:\> pic30-as file.s -p33FJ32MC202
;       2. Placing a ".equ" directive before the ".include":
;               .equ __33FJ32MC202, 1
;               .include "p33FJ32MC202.inc"
;       3. Setting the processor in the MPLAB IDE Project Dialog
;==========================================================================

;==========================================================================
;
;       Verify Processor
;
;==========================================================================

.IFNDEF __33FJ32MC202
   .ERROR "Include file does not match processor setting."
.ENDIF


;==========================================================================
;
;       Register Definitions
;
;==========================================================================

;----- Register Equates (Low Byte, High Byte) -----------------------------

        .extern WREG0
        .equiv  WREG0L, _WREG0
        .equiv  WREG0H, _WREG0+1

        .extern WREG1
        .equiv  WREG1L, _WREG1
        .equiv  WREG1H, _WREG1+1

        .extern WREG2
        .equiv  WREG2L, _WREG2
        .equiv  WREG2H, _WREG2+1

        .extern WREG3
        .equiv  WREG3L, _WREG3
        .equiv  WREG3H, _WREG3+1

        .extern WREG4
        .equiv  WREG4L, _WREG4
        .equiv  WREG4H, _WREG4+1

        .extern WREG5
        .equiv  WREG5L, _WREG5
        .equiv  WREG5H, _WREG5+1

        .extern WREG6
        .equiv  WREG6L, _WREG6
        .equiv  WREG6H, _WREG6+1

        .extern WREG7
        .equiv  WREG7L, _WREG7
        .equiv  WREG7H, _WREG7+1

        .extern WREG8
        .equiv  WREG8L, _WREG8
        .equiv  WREG8H, _WREG8+1

        .extern WREG9
        .equiv  WREG9L, _WREG9
        .equiv  WREG9H, _WREG9+1

        .extern WREG10
        .equiv  WREG10L, _WREG10
        .equiv  WREG10H, _WREG10+1

        .extern WREG11
        .equiv  WREG11L, _WREG11
        .equiv  WREG11H, _WREG11+1

        .extern WREG12
        .equiv  WREG12L, _WREG12
        .equiv  WREG12H, _WREG12+1

        .extern WREG13
        .equiv  WREG13L, _WREG13
        .equiv  WREG13H, _WREG13+1

        .extern WREG14
        .equiv  WREG14L, _WREG14
        .equiv  WREG14H, _WREG14+1

        .extern WREG15
        .equiv  WREG15L, _WREG15
        .equiv  WREG15H, _WREG15+1

        .extern SPLIM
        .equiv  SPLIML, _SPLIM
        .equiv  SPLIMH, _SPLIM+1

        .extern ACCAL
        .equiv  ACCALL, _ACCAL
        .equiv  ACCALH, _ACCAL+1

        .extern ACCAH
        .equiv  ACCAHL, _ACCAH
        .equiv  ACCAHH, _ACCAH+1

        .extern ACCAU
        .equiv  ACCAUL, _ACCAU
        .equiv  ACCAUH, _ACCAU+1

        .extern ACCBL
        .equiv  ACCBLL, _ACCBL
        .equiv  ACCBLH, _ACCBL+1

        .extern ACCBH
        .equiv  ACCBHL, _ACCBH
        .equiv  ACCBHH, _ACCBH+1

        .extern ACCBU
        .equiv  ACCBUL, _ACCBU
        .equiv  ACCBUH, _ACCBU+1

        .extern PCL
        .equiv  PCLL, _PCL
        .equiv  PCLH, _PCL+1

        .extern PCH
        .equiv  PCHL, _PCH
        .equiv  PCHH, _PCH+1

        .extern TBLPAG
        .equiv  TBLPAGL, _TBLPAG
        .equiv  TBLPAGH, _TBLPAG+1

        .extern PSVPAG
        .equiv  PSVPAGL, _PSVPAG
        .equiv  PSVPAGH, _PSVPAG+1

        .extern RCOUNT
        .equiv  RCOUNTL, _RCOUNT
        .equiv  RCOUNTH, _RCOUNT+1

        .extern DCOUNT
        .equiv  DCOUNTL, _DCOUNT
        .equiv  DCOUNTH, _DCOUNT+1

        .extern DOSTARTL
        .equiv  DOSTARTLL, _DOSTARTL
        .equiv  DOSTARTLH, _DOSTARTL+1

        .extern DOSTARTH
        .equiv  DOSTARTHL, _DOSTARTH
        .equiv  DOSTARTHH, _DOSTARTH+1

        .extern DOENDL
        .equiv  DOENDLL, _DOENDL
        .equiv  DOENDLH, _DOENDL+1

        .extern DOENDH
        .equiv  DOENDHL, _DOENDH
        .equiv  DOENDHH, _DOENDH+1

        .extern SR
        .equiv  SRL, _SR
        .equiv  SRH, _SR+1

        .extern CORCON
        .equiv  CORCONL, _CORCON
        .equiv  CORCONH, _CORCON+1

        .extern MODCON
        .equiv  MODCONL, _MODCON
        .equiv  MODCONH, _MODCON+1

        .extern XMODSRT
        .equiv  XMODSRTL, _XMODSRT
        .equiv  XMODSRTH, _XMODSRT+1

        .extern XMODEND
        .equiv  XMODENDL, _XMODEND
        .equiv  XMODENDH, _XMODEND+1

        .extern YMODSRT
        .equiv  YMODSRTL, _YMODSRT
        .equiv  YMODSRTH, _YMODSRT+1

        .extern YMODEND
        .equiv  YMODENDL, _YMODEND
        .equiv  YMODENDH, _YMODEND+1

        .extern XBREV
        .equiv  XBREVL, _XBREV
        .equiv  XBREVH, _XBREV+1

        .extern DISICNT
        .equiv  DISICNTL, _DISICNT
        .equiv  DISICNTH, _DISICNT+1

        .extern CNEN1
        .equiv  CNEN1L, _CNEN1
        .equiv  CNEN1H, _CNEN1+1

        .extern CNEN2
        .equiv  CNEN2L, _CNEN2
        .equiv  CNEN2H, _CNEN2+1

        .extern CNPU1
        .equiv  CNPU1L, _CNPU1
        .equiv  CNPU1H, _CNPU1+1

        .extern CNPU2
        .equiv  CNPU2L, _CNPU2
        .equiv  CNPU2H, _CNPU2+1

        .extern INTCON1
        .equiv  INTCON1L, _INTCON1
        .equiv  INTCON1H, _INTCON1+1

        .extern INTCON2
        .equiv  INTCON2L, _INTCON2
        .equiv  INTCON2H, _INTCON2+1

        .extern IFS0
        .equiv  IFS0L, _IFS0
        .equiv  IFS0H, _IFS0+1

        .extern IFS1
        .equiv  IFS1L, _IFS1
        .equiv  IFS1H, _IFS1+1

        .extern IFS3
        .equiv  IFS3L, _IFS3
        .equiv  IFS3H, _IFS3+1

        .extern IFS4
        .equiv  IFS4L, _IFS4
        .equiv  IFS4H, _IFS4+1

        .extern IEC0
        .equiv  IEC0L, _IEC0
        .equiv  IEC0H, _IEC0+1

        .extern IEC1
        .equiv  IEC1L, _IEC1
        .equiv  IEC1H, _IEC1+1

        .extern IEC3
        .equiv  IEC3L, _IEC3
        .equiv  IEC3H, _IEC3+1

        .extern IEC4
        .equiv  IEC4L, _IEC4
        .equiv  IEC4H, _IEC4+1

        .extern IPC0
        .equiv  IPC0L, _IPC0
        .equiv  IPC0H, _IPC0+1

        .extern IPC1
        .equiv  IPC1L, _IPC1
        .equiv  IPC1H, _IPC1+1

        .extern IPC2
        .equiv  IPC2L, _IPC2
        .equiv  IPC2H, _IPC2+1

        .extern IPC3
        .equiv  IPC3L, _IPC3
        .equiv  IPC3H, _IPC3+1

        .extern IPC4
        .equiv  IPC4L, _IPC4
        .equiv  IPC4H, _IPC4+1

        .extern IPC5
        .equiv  IPC5L, _IPC5
        .equiv  IPC5H, _IPC5+1

        .extern IPC7
        .equiv  IPC7L, _IPC7
        .equiv  IPC7H, _IPC7+1

        .extern IPC14
        .equiv  IPC14L, _IPC14
        .equiv  IPC14H, _IPC14+1

        .extern IPC15
        .equiv  IPC15L, _IPC15
        .equiv  IPC15H, _IPC15+1

        .extern IPC16
        .equiv  IPC16L, _IPC16
        .equiv  IPC16H, _IPC16+1

        .extern IPC18
        .equiv  IPC18L, _IPC18
        .equiv  IPC18H, _IPC18+1

        .extern INTTREG
        .equiv  INTTREGL, _INTTREG
        .equiv  INTTREGH, _INTTREG+1

        .extern TMR1
        .equiv  TMR1L, _TMR1
        .equiv  TMR1H, _TMR1+1

        .extern PR1
        .equiv  PR1L, _PR1
        .equiv  PR1H, _PR1+1

        .extern T1CON
        .equiv  T1CONL, _T1CON
        .equiv  T1CONH, _T1CON+1

        .extern TMR2
        .equiv  TMR2L, _TMR2
        .equiv  TMR2H, _TMR2+1

        .extern TMR3HLD
        .equiv  TMR3HLDL, _TMR3HLD
        .equiv  TMR3HLDH, _TMR3HLD+1

        .extern TMR3
        .equiv  TMR3L, _TMR3
        .equiv  TMR3H, _TMR3+1

        .extern PR2
        .equiv  PR2L, _PR2
        .equiv  PR2H, _PR2+1

        .extern PR3
        .equiv  PR3L, _PR3
        .equiv  PR3H, _PR3+1

        .extern T2CON
        .equiv  T2CONL, _T2CON
        .equiv  T2CONH, _T2CON+1

        .extern T3CON
        .equiv  T3CONL, _T3CON
        .equiv  T3CONH, _T3CON+1

        .extern IC1BUF
        .equiv  IC1BUFL, _IC1BUF
        .equiv  IC1BUFH, _IC1BUF+1

        .extern IC1CON
        .equiv  IC1CONL, _IC1CON
        .equiv  IC1CONH, _IC1CON+1

        .extern IC2BUF
        .equiv  IC2BUFL, _IC2BUF
        .equiv  IC2BUFH, _IC2BUF+1

        .extern IC2CON
        .equiv  IC2CONL, _IC2CON
        .equiv  IC2CONH, _IC2CON+1

        .extern IC7BUF
        .equiv  IC7BUFL, _IC7BUF
        .equiv  IC7BUFH, _IC7BUF+1

        .extern IC7CON
        .equiv  IC7CONL, _IC7CON
        .equiv  IC7CONH, _IC7CON+1

        .extern IC8BUF
        .equiv  IC8BUFL, _IC8BUF
        .equiv  IC8BUFH, _IC8BUF+1

        .extern IC8CON
        .equiv  IC8CONL, _IC8CON
        .equiv  IC8CONH, _IC8CON+1

        .extern OC1RS
        .equiv  OC1RSL, _OC1RS
        .equiv  OC1RSH, _OC1RS+1

        .extern OC1R
        .equiv  OC1RL, _OC1R
        .equiv  OC1RH, _OC1R+1

        .extern OC1CON
        .equiv  OC1CONL, _OC1CON
        .equiv  OC1CONH, _OC1CON+1

        .extern OC2RS
        .equiv  OC2RSL, _OC2RS
        .equiv  OC2RSH, _OC2RS+1

        .extern OC2R
        .equiv  OC2RL, _OC2R
        .equiv  OC2RH, _OC2R+1

        .extern OC2CON
        .equiv  OC2CONL, _OC2CON
        .equiv  OC2CONH, _OC2CON+1

        .extern P1TCON
        .equiv  P1TCONL, _P1TCON
        .equiv  P1TCONH, _P1TCON+1

        .extern PTCON
        .equiv  PTCONL, _PTCON
        .equiv  PTCONH, _PTCON+1

        .extern P1TMR
        .equiv  P1TMRL, _P1TMR
        .equiv  P1TMRH, _P1TMR+1

        .extern PTMR
        .equiv  PTMRL, _PTMR
        .equiv  PTMRH, _PTMR+1

        .extern P1TPER
        .equiv  P1TPERL, _P1TPER
        .equiv  P1TPERH, _P1TPER+1

        .extern PTPER
        .equiv  PTPERL, _PTPER
        .equiv  PTPERH, _PTPER+1

        .extern P1SECMP
        .equiv  P1SECMPL, _P1SECMP
        .equiv  P1SECMPH, _P1SECMP+1

        .extern SEVTCMP
        .equiv  SEVTCMPL, _SEVTCMP
        .equiv  SEVTCMPH, _SEVTCMP+1

        .extern PWM1CON1
        .equiv  PWM1CON1L, _PWM1CON1
        .equiv  PWM1CON1H, _PWM1CON1+1

        .extern PWMCON1
        .equiv  PWMCON1L, _PWMCON1
        .equiv  PWMCON1H, _PWMCON1+1

        .extern PWM1CON2
        .equiv  PWM1CON2L, _PWM1CON2
        .equiv  PWM1CON2H, _PWM1CON2+1

        .extern PWMCON2
        .equiv  PWMCON2L, _PWMCON2
        .equiv  PWMCON2H, _PWMCON2+1

        .extern DTCON1
        .equiv  DTCON1L, _DTCON1
        .equiv  DTCON1H, _DTCON1+1

        .extern P1DTCON1
        .equiv  P1DTCON1L, _P1DTCON1
        .equiv  P1DTCON1H, _P1DTCON1+1

        .extern DTCON2
        .equiv  DTCON2L, _DTCON2
        .equiv  DTCON2H, _DTCON2+1

        .extern P1DTCON2
        .equiv  P1DTCON2L, _P1DTCON2
        .equiv  P1DTCON2H, _P1DTCON2+1

        .extern FLTACON
        .equiv  FLTACONL, _FLTACON
        .equiv  FLTACONH, _FLTACON+1

        .extern P1FLTACON
        .equiv  P1FLTACONL, _P1FLTACON
        .equiv  P1FLTACONH, _P1FLTACON+1

        .extern OVDCON
        .equiv  OVDCONL, _OVDCON
        .equiv  OVDCONH, _OVDCON+1

        .extern P1OVDCON
        .equiv  P1OVDCONL, _P1OVDCON
        .equiv  P1OVDCONH, _P1OVDCON+1

        .extern P1DC1
        .equiv  P1DC1L, _P1DC1
        .equiv  P1DC1H, _P1DC1+1

        .extern PDC1
        .equiv  PDC1L, _PDC1
        .equiv  PDC1H, _PDC1+1

        .extern P1DC2
        .equiv  P1DC2L, _P1DC2
        .equiv  P1DC2H, _P1DC2+1

        .extern PDC2
        .equiv  PDC2L, _PDC2
        .equiv  PDC2H, _PDC2+1

        .extern P1DC3
        .equiv  P1DC3L, _P1DC3
        .equiv  P1DC3H, _P1DC3+1

        .extern PDC3
        .equiv  PDC3L, _PDC3
        .equiv  PDC3H, _PDC3+1

        .extern QEI1CON
        .equiv  QEI1CONL, _QEI1CON
        .equiv  QEI1CONH, _QEI1CON+1

        .extern QEICON
        .equiv  QEICONL, _QEICON
        .equiv  QEICONH, _QEICON+1

        .extern DFLT1CON
        .equiv  DFLT1CONL, _DFLT1CON
        .equiv  DFLT1CONH, _DFLT1CON+1

        .extern DFLTCON
        .equiv  DFLTCONL, _DFLTCON
        .equiv  DFLTCONH, _DFLTCON+1

        .extern POS1CNT
        .equiv  POS1CNTL, _POS1CNT
        .equiv  POS1CNTH, _POS1CNT+1

        .extern POSCNT
        .equiv  POSCNTL, _POSCNT
        .equiv  POSCNTH, _POSCNT+1

        .extern MAX1CNT
        .equiv  MAX1CNTL, _MAX1CNT
        .equiv  MAX1CNTH, _MAX1CNT+1

        .extern MAXCNT
        .equiv  MAXCNTL, _MAXCNT
        .equiv  MAXCNTH, _MAXCNT+1

        .extern I2C1RCV
        .equiv  I2C1RCVL, _I2C1RCV
        .equiv  I2C1RCVH, _I2C1RCV+1

        .extern I2CRCV
        .equiv  I2CRCVL, _I2CRCV
        .equiv  I2CRCVH, _I2CRCV+1

        .extern I2C1TRN
        .equiv  I2C1TRNL, _I2C1TRN
        .equiv  I2C1TRNH, _I2C1TRN+1

        .extern I2CTRN
        .equiv  I2CTRNL, _I2CTRN
        .equiv  I2CTRNH, _I2CTRN+1

        .extern I2C1BRG
        .equiv  I2C1BRGL, _I2C1BRG
        .equiv  I2C1BRGH, _I2C1BRG+1

        .extern I2C1CON
        .equiv  I2C1CONL, _I2C1CON
        .equiv  I2C1CONH, _I2C1CON+1

        .extern I2CCON
        .equiv  I2CCONL, _I2CCON
        .equiv  I2CCONH, _I2CCON+1

        .extern I2C1STAT
        .equiv  I2C1STATL, _I2C1STAT
        .equiv  I2C1STATH, _I2C1STAT+1

        .extern I2CSTAT
        .equiv  I2CSTATL, _I2CSTAT
        .equiv  I2CSTATH, _I2CSTAT+1

        .extern I2C1ADD
        .equiv  I2C1ADDL, _I2C1ADD
        .equiv  I2C1ADDH, _I2C1ADD+1

        .extern I2CADD
        .equiv  I2CADDL, _I2CADD
        .equiv  I2CADDH, _I2CADD+1

        .extern I2C1MSK
        .equiv  I2C1MSKL, _I2C1MSK
        .equiv  I2C1MSKH, _I2C1MSK+1

        .extern U1MODE
        .equiv  U1MODEL, _U1MODE
        .equiv  U1MODEH, _U1MODE+1

        .extern U1STA
        .equiv  U1STAL, _U1STA
        .equiv  U1STAH, _U1STA+1

        .extern U1TXREG
        .equiv  U1TXREGL, _U1TXREG
        .equiv  U1TXREGH, _U1TXREG+1

        .extern U1RXREG
        .equiv  U1RXREGL, _U1RXREG
        .equiv  U1RXREGH, _U1RXREG+1

        .extern U1BRG
        .equiv  U1BRGL, _U1BRG
        .equiv  U1BRGH, _U1BRG+1

        .extern SPI1STAT
        .equiv  SPI1STATL, _SPI1STAT
        .equiv  SPI1STATH, _SPI1STAT+1

        .extern SPI1CON1
        .equiv  SPI1CON1L, _SPI1CON1
        .equiv  SPI1CON1H, _SPI1CON1+1

        .extern SPI1CON2
        .equiv  SPI1CON2L, _SPI1CON2
        .equiv  SPI1CON2H, _SPI1CON2+1

        .extern SPI1BUF
        .equiv  SPI1BUFL, _SPI1BUF
        .equiv  SPI1BUFH, _SPI1BUF+1

        .extern TRISA
        .equiv  TRISAL, _TRISA
        .equiv  TRISAH, _TRISA+1

        .extern PORTA
        .equiv  PORTAL, _PORTA
        .equiv  PORTAH, _PORTA+1

        .extern LATA
        .equiv  LATAL, _LATA
        .equiv  LATAH, _LATA+1

        .extern ODCA
        .equiv  ODCAL, _ODCA
        .equiv  ODCAH, _ODCA+1

        .extern TRISB
        .equiv  TRISBL, _TRISB
        .equiv  TRISBH, _TRISB+1

        .extern PORTB
        .equiv  PORTBL, _PORTB
        .equiv  PORTBH, _PORTB+1

        .extern LATB
        .equiv  LATBL, _LATB
        .equiv  LATBH, _LATB+1

        .extern ODCB
        .equiv  ODCBL, _ODCB
        .equiv  ODCBH, _ODCB+1

        .extern ADC1BUF0
        .equiv  ADC1BUF0L, _ADC1BUF0
        .equiv  ADC1BUF0H, _ADC1BUF0+1

        .extern ADCBUF0
        .equiv  ADCBUF0L, _ADCBUF0
        .equiv  ADCBUF0H, _ADCBUF0+1

        .extern ADC1BUF1
        .equiv  ADC1BUF1L, _ADC1BUF1
        .equiv  ADC1BUF1H, _ADC1BUF1+1

        .extern ADCBUF1
        .equiv  ADCBUF1L, _ADCBUF1
        .equiv  ADCBUF1H, _ADCBUF1+1

        .extern ADC1BUF2
        .equiv  ADC1BUF2L, _ADC1BUF2
        .equiv  ADC1BUF2H, _ADC1BUF2+1

        .extern ADCBUF2
        .equiv  ADCBUF2L, _ADCBUF2
        .equiv  ADCBUF2H, _ADCBUF2+1

        .extern ADC1BUF3
        .equiv  ADC1BUF3L, _ADC1BUF3
        .equiv  ADC1BUF3H, _ADC1BUF3+1

        .extern ADCBUF3
        .equiv  ADCBUF3L, _ADCBUF3
        .equiv  ADCBUF3H, _ADCBUF3+1

        .extern ADC1BUF4
        .equiv  ADC1BUF4L, _ADC1BUF4
        .equiv  ADC1BUF4H, _ADC1BUF4+1

        .extern ADCBUF4
        .equiv  ADCBUF4L, _ADCBUF4
        .equiv  ADCBUF4H, _ADCBUF4+1

        .extern ADC1BUF5
        .equiv  ADC1BUF5L, _ADC1BUF5
        .equiv  ADC1BUF5H, _ADC1BUF5+1

        .extern ADCBUF5
        .equiv  ADCBUF5L, _ADCBUF5
        .equiv  ADCBUF5H, _ADCBUF5+1

        .extern ADC1BUF6
        .equiv  ADC1BUF6L, _ADC1BUF6
        .equiv  ADC1BUF6H, _ADC1BUF6+1

        .extern ADCBUF6
        .equiv  ADCBUF6L, _ADCBUF6
        .equiv  ADCBUF6H, _ADCBUF6+1

        .extern ADC1BUF7
        .equiv  ADC1BUF7L, _ADC1BUF7
        .equiv  ADC1BUF7H, _ADC1BUF7+1

        .extern ADCBUF7
        .equiv  ADCBUF7L, _ADCBUF7
        .equiv  ADCBUF7H, _ADCBUF7+1

        .extern ADC1BUF8
        .equiv  ADC1BUF8L, _ADC1BUF8
        .equiv  ADC1BUF8H, _ADC1BUF8+1

        .extern ADCBUF8
        .equiv  ADCBUF8L, _ADCBUF8
        .equiv  ADCBUF8H, _ADCBUF8+1

        .extern ADC1BUF9
        .equiv  ADC1BUF9L, _ADC1BUF9
        .equiv  ADC1BUF9H, _ADC1BUF9+1

        .extern ADCBUF9
        .equiv  ADCBUF9L, _ADCBUF9
        .equiv  ADCBUF9H, _ADCBUF9+1

        .extern ADC1BUFA
        .equiv  ADC1BUFAL, _ADC1BUFA
        .equiv  ADC1BUFAH, _ADC1BUFA+1

        .extern ADCBUFA
        .equiv  ADCBUFAL, _ADCBUFA
        .equiv  ADCBUFAH, _ADCBUFA+1

        .extern ADC1BUFB
        .equiv  ADC1BUFBL, _ADC1BUFB
        .equiv  ADC1BUFBH, _ADC1BUFB+1

        .extern ADCBUFB
        .equiv  ADCBUFBL, _ADCBUFB
        .equiv  ADCBUFBH, _ADCBUFB+1

        .extern ADC1BUFC
        .equiv  ADC1BUFCL, _ADC1BUFC
        .equiv  ADC1BUFCH, _ADC1BUFC+1

        .extern ADCBUFC
        .equiv  ADCBUFCL, _ADCBUFC
        .equiv  ADCBUFCH, _ADCBUFC+1

        .extern ADC1BUFD
        .equiv  ADC1BUFDL, _ADC1BUFD
        .equiv  ADC1BUFDH, _ADC1BUFD+1

        .extern ADCBUFD
        .equiv  ADCBUFDL, _ADCBUFD
        .equiv  ADCBUFDH, _ADCBUFD+1

        .extern ADC1BUFE
        .equiv  ADC1BUFEL, _ADC1BUFE
        .equiv  ADC1BUFEH, _ADC1BUFE+1

        .extern ADCBUFE
        .equiv  ADCBUFEL, _ADCBUFE
        .equiv  ADCBUFEH, _ADCBUFE+1

        .extern ADC1BUFF
        .equiv  ADC1BUFFL, _ADC1BUFF
        .equiv  ADC1BUFFH, _ADC1BUFF+1

        .extern ADCBUFF
        .equiv  ADCBUFFL, _ADCBUFF
        .equiv  ADCBUFFH, _ADCBUFF+1

        .extern AD1CON1
        .equiv  AD1CON1L, _AD1CON1
        .equiv  AD1CON1H, _AD1CON1+1

        .extern AD1CON2
        .equiv  AD1CON2L, _AD1CON2
        .equiv  AD1CON2H, _AD1CON2+1

        .extern AD1CON3
        .equiv  AD1CON3L, _AD1CON3
        .equiv  AD1CON3H, _AD1CON3+1

        .extern AD1CHS123
        .equiv  AD1CHS123L, _AD1CHS123
        .equiv  AD1CHS123H, _AD1CHS123+1

        .extern AD1CHS0
        .equiv  AD1CHS0L, _AD1CHS0
        .equiv  AD1CHS0H, _AD1CHS0+1

        .extern AD1PCFGL
        .equiv  AD1PCFGLL, _AD1PCFGL
        .equiv  AD1PCFGLH, _AD1PCFGL+1

        .extern ADPCFG
        .equiv  ADPCFGL, _ADPCFG
        .equiv  ADPCFGH, _ADPCFG+1

        .extern AD1CSSL
        .equiv  AD1CSSLL, _AD1CSSL
        .equiv  AD1CSSLH, _AD1CSSL+1

        .extern P2TCON
        .equiv  P2TCONL, _P2TCON
        .equiv  P2TCONH, _P2TCON+1

        .extern P2TMR
        .equiv  P2TMRL, _P2TMR
        .equiv  P2TMRH, _P2TMR+1

        .extern P2TPER
        .equiv  P2TPERL, _P2TPER
        .equiv  P2TPERH, _P2TPER+1

        .extern P2SECMP
        .equiv  P2SECMPL, _P2SECMP
        .equiv  P2SECMPH, _P2SECMP+1

        .extern PWM2CON1
        .equiv  PWM2CON1L, _PWM2CON1
        .equiv  PWM2CON1H, _PWM2CON1+1

        .extern PWM2CON2
        .equiv  PWM2CON2L, _PWM2CON2
        .equiv  PWM2CON2H, _PWM2CON2+1

        .extern P2DTCON1
        .equiv  P2DTCON1L, _P2DTCON1
        .equiv  P2DTCON1H, _P2DTCON1+1

        .extern P2DTCON2
        .equiv  P2DTCON2L, _P2DTCON2
        .equiv  P2DTCON2H, _P2DTCON2+1

        .extern P2FLTACON
        .equiv  P2FLTACONL, _P2FLTACON
        .equiv  P2FLTACONH, _P2FLTACON+1

        .extern P2OVDCON
        .equiv  P2OVDCONL, _P2OVDCON
        .equiv  P2OVDCONH, _P2OVDCON+1

        .extern P2DC1
        .equiv  P2DC1L, _P2DC1
        .equiv  P2DC1H, _P2DC1+1

        .extern RPINR0
        .equiv  RPINR0L, _RPINR0
        .equiv  RPINR0H, _RPINR0+1

        .extern RPINR1
        .equiv  RPINR1L, _RPINR1
        .equiv  RPINR1H, _RPINR1+1

        .extern RPINR3
        .equiv  RPINR3L, _RPINR3
        .equiv  RPINR3H, _RPINR3+1

        .extern RPINR7
        .equiv  RPINR7L, _RPINR7
        .equiv  RPINR7H, _RPINR7+1

        .extern RPINR10
        .equiv  RPINR10L, _RPINR10
        .equiv  RPINR10H, _RPINR10+1

        .extern RPINR11
        .equiv  RPINR11L, _RPINR11
        .equiv  RPINR11H, _RPINR11+1

        .extern RPINR12
        .equiv  RPINR12L, _RPINR12
        .equiv  RPINR12H, _RPINR12+1

        .extern RPINR13
        .equiv  RPINR13L, _RPINR13
        .equiv  RPINR13H, _RPINR13+1

        .extern RPINR14
        .equiv  RPINR14L, _RPINR14
        .equiv  RPINR14H, _RPINR14+1

        .extern RPINR15
        .equiv  RPINR15L, _RPINR15
        .equiv  RPINR15H, _RPINR15+1

        .extern RPINR18
        .equiv  RPINR18L, _RPINR18
        .equiv  RPINR18H, _RPINR18+1

        .extern RPINR20
        .equiv  RPINR20L, _RPINR20
        .equiv  RPINR20H, _RPINR20+1

        .extern RPINR21
        .equiv  RPINR21L, _RPINR21
        .equiv  RPINR21H, _RPINR21+1

        .extern RPOR0
        .equiv  RPOR0L, _RPOR0
        .equiv  RPOR0H, _RPOR0+1

        .extern RPOR1
        .equiv  RPOR1L, _RPOR1
        .equiv  RPOR1H, _RPOR1+1

        .extern RPOR2
        .equiv  RPOR2L, _RPOR2
        .equiv  RPOR2H, _RPOR2+1

        .extern RPOR3
        .equiv  RPOR3L, _RPOR3
        .equiv  RPOR3H, _RPOR3+1

        .extern RPOR4
        .equiv  RPOR4L, _RPOR4
        .equiv  RPOR4H, _RPOR4+1

        .extern RPOR5
        .equiv  RPOR5L, _RPOR5
        .equiv  RPOR5H, _RPOR5+1

        .extern RPOR6
        .equiv  RPOR6L, _RPOR6
        .equiv  RPOR6H, _RPOR6+1

        .extern RPOR7
        .equiv  RPOR7L, _RPOR7
        .equiv  RPOR7H, _RPOR7+1

        .extern RCON
        .equiv  RCONL, _RCON
        .equiv  RCONH, _RCON+1

        .extern OSCCON

        .extern OSCCONL
        .equiv  OSCCONLL, _OSCCONL
        .equiv  OSCCONLH, _OSCCONL+1

        .extern OSCCONH
        .equiv  OSCCONHL, _OSCCONH
        .equiv  OSCCONHH, _OSCCONH+1

        .extern CLKDIV
        .equiv  CLKDIVL, _CLKDIV
        .equiv  CLKDIVH, _CLKDIV+1

        .extern PLLFBD
        .equiv  PLLFBDL, _PLLFBD
        .equiv  PLLFBDH, _PLLFBD+1

        .extern OSCTUN
        .equiv  OSCTUNL, _OSCTUN
        .equiv  OSCTUNH, _OSCTUN+1

        .extern NVMCON
        .equiv  NVMCONL, _NVMCON
        .equiv  NVMCONH, _NVMCON+1

        .extern NVMKEY
        .equiv  NVMKEYL, _NVMKEY
        .equiv  NVMKEYH, _NVMKEY+1

        .extern PMD1
        .equiv  PMD1L, _PMD1
        .equiv  PMD1H, _PMD1+1

        .extern PMD2
        .equiv  PMD2L, _PMD2
        .equiv  PMD2H, _PMD2+1

        .extern PMD3
        .equiv  PMD3L, _PMD3
        .equiv  PMD3H, _PMD3+1

;----- SR Bits -----------------------------------------------------
        .equiv C,       0x0000
        .equiv Z,       0x0001
        .equiv OV,      0x0002
        .equiv N,       0x0003
        .equiv RA,      0x0004
        .equiv DC,      0x0008
        .equiv DA,      0x0009
        .equiv SAB,     0x000A
        .equiv OAB,     0x000B
        .equiv SB,      0x000C
        .equiv SA,      0x000D
        .equiv OB,      0x000E
        .equiv OA,      0x000F

        .equiv IPL0,    0x0005
        .equiv IPL1,    0x0006
        .equiv IPL2,    0x0007


;----- CORCON Bits -----------------------------------------------------
        .equiv IF,      0x0000
        .equiv RND,     0x0001
        .equiv PSV,     0x0002
        .equiv IPL3,    0x0003
        .equiv ACCSAT,  0x0004
        .equiv SATDW,   0x0005
        .equiv SATB,    0x0006
        .equiv SATA,    0x0007
        .equiv EDT,     0x000B
        .equiv US,      0x000C

        .equiv DL0,     0x0008
        .equiv DL1,     0x0009
        .equiv DL2,     0x000A


;----- MODCON Bits -----------------------------------------------------
        .equiv YMODEN,  0x000E
        .equiv XMODEN,  0x000F

        .equiv XWM0,    0x0000
        .equiv XWM1,    0x0001
        .equiv XWM2,    0x0002
        .equiv XWM3,    0x0003
        .equiv YWM0,    0x0004
        .equiv YWM1,    0x0005
        .equiv YWM2,    0x0006
        .equiv YWM3,    0x0007
        .equiv BWM0,    0x0008
        .equiv BWM1,    0x0009
        .equiv BWM2,    0x000A
        .equiv BWM3,    0x000B


;----- XBREV Bits -----------------------------------------------------
        .equiv BREN,    0x000F

        .equiv XB0,     0x0000
        .equiv XB1,     0x0001
        .equiv XB2,     0x0002
        .equiv XB3,     0x0003
        .equiv XB4,     0x0004
        .equiv XB5,     0x0005
        .equiv XB6,     0x0006
        .equiv XB7,     0x0007
        .equiv XB8,     0x0008
        .equiv XB9,     0x0009
        .equiv XB10,    0x000A
        .equiv XB11,    0x000B
        .equiv XB12,    0x000C
        .equiv XB13,    0x000D
        .equiv XB14,    0x000E


;----- CNEN1 Bits -----------------------------------------------------
        .equiv CN0IE,   0x0000
        .equiv CN1IE,   0x0001
        .equiv CN2IE,   0x0002
        .equiv CN3IE,   0x0003
        .equiv CN4IE,   0x0004
        .equiv CN5IE,   0x0005
        .equiv CN6IE,   0x0006
        .equiv CN7IE,   0x0007
        .equiv CN11IE,  0x000B
        .equiv CN12IE,  0x000C
        .equiv CN13IE,  0x000D
        .equiv CN14IE,  0x000E
        .equiv CN15IE,  0x000F


;----- CNEN2 Bits -----------------------------------------------------
        .equiv CN16IE,  0x0000
        .equiv CN21IE,  0x0005
        .equiv CN22IE,  0x0006
        .equiv CN23IE,  0x0007
        .equiv CN24IE,  0x0008
        .equiv CN27IE,  0x000B
        .equiv CN29IE,  0x000D
        .equiv CN30IE,  0x000E


;----- CNPU1 Bits -----------------------------------------------------
        .equiv CN0PUE,  0x0000
        .equiv CN1PUE,  0x0001
        .equiv CN2PUE,  0x0002
        .equiv CN3PUE,  0x0003
        .equiv CN4PUE,  0x0004
        .equiv CN5PUE,  0x0005
        .equiv CN6PUE,  0x0006
        .equiv CN7PUE,  0x0007
        .equiv CN11PUE, 0x000B
        .equiv CN12PUE, 0x000C
        .equiv CN13PUE, 0x000D
        .equiv CN14PUE, 0x000E
        .equiv CN15PUE, 0x000F


;----- CNPU2 Bits -----------------------------------------------------
        .equiv CN16PUE, 0x0000
        .equiv CN21PUE, 0x0005
        .equiv CN22PUE, 0x0006
        .equiv CN23PUE, 0x0007
        .equiv CN24PUE, 0x0008
        .equiv CN27PUE, 0x000B
        .equiv CN29PUE, 0x000D
        .equiv CN30PUE, 0x000E


;----- INTCON1 Bits -----------------------------------------------------
        .equiv OSCFAIL, 0x0001
        .equiv STKERR,  0x0002
        .equiv ADDRERR, 0x0003
        .equiv MATHERR, 0x0004
        .equiv DIV0ERR, 0x0006
        .equiv SFTACERR, 0x0007
        .equiv COVTE,   0x0008
        .equiv OVBTE,   0x0009
        .equiv OVATE,   0x000A
        .equiv COVBERR, 0x000B
        .equiv COVAERR, 0x000C
        .equiv OVBERR,  0x000D
        .equiv OVAERR,  0x000E
        .equiv NSTDIS,  0x000F


;----- INTCON2 Bits -----------------------------------------------------
        .equiv INT0EP,  0x0000
        .equiv INT1EP,  0x0001
        .equiv INT2EP,  0x0002
        .equiv DISI,    0x000E
        .equiv ALTIVT,  0x000F


;----- IFS0 Bits -----------------------------------------------------
        .equiv INT0IF,  0x0000
        .equiv IC1IF,   0x0001
        .equiv OC1IF,   0x0002
        .equiv T1IF,    0x0003
        .equiv IC2IF,   0x0005
        .equiv OC2IF,   0x0006
        .equiv T2IF,    0x0007
        .equiv T3IF,    0x0008
        .equiv SPI1EIF, 0x0009
        .equiv SPI1IF,  0x000A
        .equiv U1RXIF,  0x000B
        .equiv U1TXIF,  0x000C
        .equiv AD1IF,   0x000D


;----- IFS1 Bits -----------------------------------------------------
        .equiv SI2C1IF, 0x0000
        .equiv MI2C1IF, 0x0001
        .equiv CNIF,    0x0003
        .equiv INT1IF,  0x0004
        .equiv IC7IF,   0x0006
        .equiv IC8IF,   0x0007
        .equiv INT2IF,  0x000D

        .equiv SI2CIF,  0x0000


;----- IFS3 Bits -----------------------------------------------------
        .equiv PWM1IF,  0x0009
        .equiv QEIIF,   0x000A
        .equiv FLTA1IF, 0x000F


;----- IFS4 Bits -----------------------------------------------------
        .equiv U1EIF,   0x0001
        .equiv PWM2IF,  0x0009
        .equiv FLTA2IF, 0x000A


;----- IEC0 Bits -----------------------------------------------------
        .equiv INT0IE,  0x0000
        .equiv IC1IE,   0x0001
        .equiv OC1IE,   0x0002
        .equiv T1IE,    0x0003
        .equiv IC2IE,   0x0005
        .equiv OC2IE,   0x0006
        .equiv T2IE,    0x0007
        .equiv T3IE,    0x0008
        .equiv SPI1EIE, 0x0009
        .equiv SPI1IE,  0x000A
        .equiv U1RXIE,  0x000B
        .equiv U1TXIE,  0x000C
        .equiv AD1IE,   0x000D


;----- IEC1 Bits -----------------------------------------------------
        .equiv SI2C1IE, 0x0000
        .equiv MI2C1IE, 0x0001
        .equiv CNIE,    0x0003
        .equiv INT1IE,  0x0004
        .equiv IC7IE,   0x0006
        .equiv IC8IE,   0x0007
        .equiv INT2IE,  0x000D

        .equiv SI2CIE,  0x0000


;----- IEC3 Bits -----------------------------------------------------
        .equiv PWM1IE,  0x0009
        .equiv QEIIE,   0x000A
        .equiv FLTA1IE, 0x000F


;----- IEC4 Bits -----------------------------------------------------
        .equiv U1EIE,   0x0001
        .equiv PWM2IE,  0x0009
        .equiv FLTA2IE, 0x000A


;----- IPC0 Bits -----------------------------------------------------
        .equiv INT0IP0, 0x0000
        .equiv INT0IP1, 0x0001
        .equiv INT0IP2, 0x0002
        .equiv IC1IP0,  0x0004
        .equiv IC1IP1,  0x0005
        .equiv IC1IP2,  0x0006
        .equiv OC1IP0,  0x0008
        .equiv OC1IP1,  0x0009
        .equiv OC1IP2,  0x000A
        .equiv T1IP0,   0x000C
        .equiv T1IP1,   0x000D
        .equiv T1IP2,   0x000E


;----- IPC1 Bits -----------------------------------------------------
        .equiv IC2IP0,  0x0004
        .equiv IC2IP1,  0x0005
        .equiv IC2IP2,  0x0006
        .equiv OC2IP0,  0x0008
        .equiv OC2IP1,  0x0009
        .equiv OC2IP2,  0x000A
        .equiv T2IP0,   0x000C
        .equiv T2IP1,   0x000D
        .equiv T2IP2,   0x000E


;----- IPC2 Bits -----------------------------------------------------
        .equiv T3IP0,   0x0000
        .equiv T3IP1,   0x0001
        .equiv T3IP2,   0x0002
        .equiv SPI1EIP0, 0x0004
        .equiv SPI1EIP1, 0x0005
        .equiv SPI1EIP2, 0x0006
        .equiv SPI1IP0, 0x0008
        .equiv SPI1IP1, 0x0009
        .equiv SPI1IP2, 0x000A
        .equiv U1RXIP0, 0x000C
        .equiv U1RXIP1, 0x000D
        .equiv U1RXIP2, 0x000E


;----- IPC3 Bits -----------------------------------------------------
        .equiv U1TXIP0, 0x0000
        .equiv U1TXIP1, 0x0001
        .equiv U1TXIP2, 0x0002
        .equiv AD1IP0,  0x0004
        .equiv AD1IP1,  0x0005
        .equiv AD1IP2,  0x0006


;----- IPC4 Bits -----------------------------------------------------
        .equiv SI2C1IP0, 0x0000
        .equiv SI2C1IP1, 0x0001
        .equiv SI2C1IP2, 0x0002
        .equiv MI2C1IP0, 0x0004
        .equiv MI2C1IP1, 0x0005
        .equiv MI2C1IP2, 0x0006
        .equiv CNIP0,   0x000C
        .equiv CNIP1,   0x000D
        .equiv CNIP2,   0x000E


;----- IPC5 Bits -----------------------------------------------------
        .equiv INT1IP0, 0x0000
        .equiv INT1IP1, 0x0001
        .equiv INT1IP2, 0x0002
        .equiv IC7IP0,  0x0008
        .equiv IC7IP1,  0x0009
        .equiv IC7IP2,  0x000A
        .equiv IC8IP0,  0x000C
        .equiv IC8IP1,  0x000D
        .equiv IC8IP2,  0x000E


;----- IPC7 Bits -----------------------------------------------------
        .equiv INT2IP0, 0x0004
        .equiv INT2IP1, 0x0005
        .equiv INT2IP2, 0x0006


;----- IPC14 Bits -----------------------------------------------------
        .equiv PWM1IP0, 0x0004
        .equiv PWM1IP1, 0x0005
        .equiv PWM1IP2, 0x0006
        .equiv QEIIP0,  0x0008
        .equiv QEIIP1,  0x0009
        .equiv QEIIP2,  0x000A


;----- IPC15 Bits -----------------------------------------------------
        .equiv FLTA1IP0, 0x000C
        .equiv FLTA1IP1, 0x000D
        .equiv FLTA1IP2, 0x000E


;----- IPC16 Bits -----------------------------------------------------
        .equiv U1EIP0,  0x0004
        .equiv U1EIP1,  0x0005
        .equiv U1EIP2,  0x0006


;----- IPC18 Bits -----------------------------------------------------
        .equiv PWM2IP0, 0x0004
        .equiv PWM2IP1, 0x0005
        .equiv PWM2IP2, 0x0006
        .equiv FLTA2IP0, 0x0008
        .equiv FLTA2IP1, 0x0009
        .equiv FLTA2IP2, 0x000A


;----- INTTREG Bits -----------------------------------------------------
        .equiv VECNUM0, 0x0000
        .equiv VECNUM1, 0x0001
        .equiv VECNUM2, 0x0002
        .equiv VECNUM3, 0x0003
        .equiv VECNUM4, 0x0004
        .equiv VECNUM5, 0x0005
        .equiv VECNUM6, 0x0006
        .equiv ILR0,    0x0008
        .equiv ILR1,    0x0009
        .equiv ILR2,    0x000A
        .equiv ILR3,    0x000B


;----- T1CON Bits -----------------------------------------------------
        .equiv TCS,     0x0001
        .equiv TSYNC,   0x0002
        .equiv TGATE,   0x0006
        .equiv TSIDL,   0x000D
        .equiv TON,     0x000F

        .equiv TCKPS0,  0x0004
        .equiv TCKPS1,  0x0005


;----- T2CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
        .equiv T32,     0x0003
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- T3CON Bits -----------------------------------------------------
       ;.equiv TCS,     0x0001
       ;.equiv TGATE,   0x0006
       ;.equiv TSIDL,   0x000D
       ;.equiv TON,     0x000F

       ;.equiv TCKPS0,  0x0004
       ;.equiv TCKPS1,  0x0005


;----- IC1CON Bits -----------------------------------------------------
        .equiv ICBNE,   0x0003
        .equiv ICOV,    0x0004
        .equiv ICTMR,   0x0007
        .equiv ICSIDL,  0x000D

        .equiv ICM0,    0x0000
        .equiv ICM1,    0x0001
        .equiv ICM2,    0x0002
        .equiv ICI0,    0x0005
        .equiv ICI1,    0x0006


;----- IC2CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC7CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- IC8CON Bits -----------------------------------------------------
       ;.equiv ICBNE,   0x0003
       ;.equiv ICOV,    0x0004
       ;.equiv ICTMR,   0x0007
       ;.equiv ICSIDL,  0x000D

       ;.equiv ICM0,    0x0000
       ;.equiv ICM1,    0x0001
       ;.equiv ICM2,    0x0002
       ;.equiv ICI0,    0x0005
       ;.equiv ICI1,    0x0006


;----- OC1CON Bits -----------------------------------------------------
        .equiv OCTSEL,  0x0003
        .equiv OCFLT,   0x0004
        .equiv OCSIDL,  0x000D

        .equiv OCM0,    0x0000
        .equiv OCM1,    0x0001
        .equiv OCM2,    0x0002


;----- OC2CON Bits -----------------------------------------------------
       ;.equiv OCTSEL,  0x0003
       ;.equiv OCFLT,   0x0004
       ;.equiv OCSIDL,  0x000D

       ;.equiv OCM0,    0x0000
       ;.equiv OCM1,    0x0001
       ;.equiv OCM2,    0x0002


;----- P1TCON Bits -----------------------------------------------------
        .equiv PTSIDL,  0x000D
        .equiv PTEN,    0x000F

        .equiv PTMOD0,  0x0000
        .equiv PTMOD1,  0x0001
        .equiv PTCKPS0, 0x0002
        .equiv PTCKPS1, 0x0003
        .equiv PTOPS0,  0x0004
        .equiv PTOPS1,  0x0005
        .equiv PTOPS2,  0x0006
        .equiv PTOPS3,  0x0007


;----- PTCON Bits -----------------------------------------------------
       ;.equiv PTSIDL,  0x000D
       ;.equiv PTEN,    0x000F

       ;.equiv PTMOD0,  0x0000
       ;.equiv PTMOD1,  0x0001
       ;.equiv PTCKPS0, 0x0002
       ;.equiv PTCKPS1, 0x0003
       ;.equiv PTOPS0,  0x0004
       ;.equiv PTOPS1,  0x0005
       ;.equiv PTOPS2,  0x0006
       ;.equiv PTOPS3,  0x0007


;----- P1TMR Bits -----------------------------------------------------
        .equiv PTDIR,   0x000F


;----- PTMR Bits -----------------------------------------------------
       ;.equiv PTDIR,   0x000F


;----- P1SECMP Bits -----------------------------------------------------
        .equiv SEVTDIR, 0x000F


;----- SEVTCMP Bits -----------------------------------------------------
       ;.equiv SEVTDIR, 0x000F


;----- PWM1CON1 Bits -----------------------------------------------------
        .equiv PEN1L,   0x0000
        .equiv PEN2L,   0x0001
        .equiv PEN3L,   0x0002
        .equiv PEN1H,   0x0004
        .equiv PEN2H,   0x0005
        .equiv PEN3H,   0x0006
        .equiv PMOD1,   0x0008
        .equiv PMOD2,   0x0009
        .equiv PMOD3,   0x000A


;----- PWMCON1 Bits -----------------------------------------------------
       ;.equiv PEN1L,   0x0000
       ;.equiv PEN2L,   0x0001
       ;.equiv PEN3L,   0x0002
       ;.equiv PEN1H,   0x0004
       ;.equiv PEN2H,   0x0005
       ;.equiv PEN3H,   0x0006
       ;.equiv PMOD1,   0x0008
       ;.equiv PMOD2,   0x0009
       ;.equiv PMOD3,   0x000A


;----- PWM1CON2 Bits -----------------------------------------------------
        .equiv UDIS,    0x0000
        .equiv OSYNC,   0x0001
        .equiv IUE,     0x0002

        .equiv SEVOPS0, 0x0008
        .equiv SEVOPS1, 0x0009
        .equiv SEVOPS2, 0x000A
        .equiv SEVOPS3, 0x000B


;----- PWMCON2 Bits -----------------------------------------------------
       ;.equiv UDIS,    0x0000
       ;.equiv OSYNC,   0x0001
       ;.equiv IUE,     0x0002

       ;.equiv SEVOPS0, 0x0008
       ;.equiv SEVOPS1, 0x0009
       ;.equiv SEVOPS2, 0x000A
       ;.equiv SEVOPS3, 0x000B


;----- DTCON1 Bits -----------------------------------------------------
        .equiv DTA0,    0x0000
        .equiv DTA1,    0x0001
        .equiv DTA2,    0x0002
        .equiv DTA3,    0x0003
        .equiv DTA4,    0x0004
        .equiv DTA5,    0x0005
        .equiv DTAPS0,  0x0006
        .equiv DTAPS1,  0x0007
        .equiv DTB0,    0x0008
        .equiv DTB1,    0x0009
        .equiv DTB2,    0x000A
        .equiv DTB3,    0x000B
        .equiv DTB4,    0x000C
        .equiv DTB5,    0x000D
        .equiv DTBPS0,  0x000E
        .equiv DTBPS1,  0x000F


;----- P1DTCON1 Bits -----------------------------------------------------
       ;.equiv DTA0,    0x0000
       ;.equiv DTA1,    0x0001
       ;.equiv DTA2,    0x0002
       ;.equiv DTA3,    0x0003
       ;.equiv DTA4,    0x0004
       ;.equiv DTA5,    0x0005
       ;.equiv DTAPS0,  0x0006
       ;.equiv DTAPS1,  0x0007
       ;.equiv DTB0,    0x0008
       ;.equiv DTB1,    0x0009
       ;.equiv DTB2,    0x000A
       ;.equiv DTB3,    0x000B
       ;.equiv DTB4,    0x000C
       ;.equiv DTB5,    0x000D
       ;.equiv DTBPS0,  0x000E
       ;.equiv DTBPS1,  0x000F


;----- DTCON2 Bits -----------------------------------------------------
        .equiv DTS1I,   0x0000
        .equiv DTS1A,   0x0001
        .equiv DTS2I,   0x0002
        .equiv DTS2A,   0x0003
        .equiv DTS3I,   0x0004
        .equiv DTS3A,   0x0005


;----- P1DTCON2 Bits -----------------------------------------------------
       ;.equiv DTS1I,   0x0000
       ;.equiv DTS1A,   0x0001
       ;.equiv DTS2I,   0x0002
       ;.equiv DTS2A,   0x0003
       ;.equiv DTS3I,   0x0004
       ;.equiv DTS3A,   0x0005


;----- FLTACON Bits -----------------------------------------------------
        .equiv FAEN1,   0x0000
        .equiv FAEN2,   0x0001
        .equiv FAEN3,   0x0002
        .equiv FLTAM,   0x0007
        .equiv FAOV1L,  0x0008
        .equiv FAOV1H,  0x0009
        .equiv FAOV2L,  0x000A
        .equiv FAOV2H,  0x000B
        .equiv FAOV3L,  0x000C
        .equiv FAOV3H,  0x000D


;----- P1FLTACON Bits -----------------------------------------------------
       ;.equiv FAEN1,   0x0000
       ;.equiv FAEN2,   0x0001
       ;.equiv FAEN3,   0x0002
       ;.equiv FLTAM,   0x0007
       ;.equiv FAOV1L,  0x0008
       ;.equiv FAOV1H,  0x0009
       ;.equiv FAOV2L,  0x000A
       ;.equiv FAOV2H,  0x000B
       ;.equiv FAOV3L,  0x000C
       ;.equiv FAOV3H,  0x000D


;----- OVDCON Bits -----------------------------------------------------
        .equiv POUT1L,  0x0000
        .equiv POUT1H,  0x0001
        .equiv POUT2L,  0x0002
        .equiv POUT2H,  0x0003
        .equiv POUT3L,  0x0004
        .equiv POUT3H,  0x0005
        .equiv POVD1L,  0x0008
        .equiv POVD1H,  0x0009
        .equiv POVD2L,  0x000A
        .equiv POVD2H,  0x000B
        .equiv POVD3L,  0x000C
        .equiv POVD3H,  0x000D


;----- P1OVDCON Bits -----------------------------------------------------
       ;.equiv POUT1L,  0x0000
       ;.equiv POUT1H,  0x0001
       ;.equiv POUT2L,  0x0002
       ;.equiv POUT2H,  0x0003
       ;.equiv POUT3L,  0x0004
       ;.equiv POUT3H,  0x0005
       ;.equiv POVD1L,  0x0008
       ;.equiv POVD1H,  0x0009
       ;.equiv POVD2L,  0x000A
       ;.equiv POVD2H,  0x000B
       ;.equiv POVD3L,  0x000C
       ;.equiv POVD3H,  0x000D


;----- QEI1CON Bits -----------------------------------------------------
        .equiv UPDN_SRC, 0x0000
        .equiv TQCS,    0x0001
        .equiv POSRES,  0x0002
        .equiv TQGATE,  0x0005
        .equiv PCDOUT,  0x0006
        .equiv SWPAB,   0x0007
        .equiv UPDN,    0x000B
        .equiv INDX,    0x000C
        .equiv QEISIDL, 0x000D
        .equiv CNTERR,  0x000F

        .equiv TQCKPS0, 0x0003
        .equiv TQCKPS1, 0x0004
        .equiv QEIM0,   0x0008
        .equiv QEIM1,   0x0009
        .equiv QEIM2,   0x000A


;----- QEICON Bits -----------------------------------------------------
       ;.equiv UPDN_SRC, 0x0000
       ;.equiv TQCS,    0x0001
       ;.equiv POSRES,  0x0002
       ;.equiv TQGATE,  0x0005
       ;.equiv PCDOUT,  0x0006
       ;.equiv SWPAB,   0x0007
       ;.equiv UPDN,    0x000B
       ;.equiv INDX,    0x000C
       ;.equiv QEISIDL, 0x000D
       ;.equiv CNTERR,  0x000F

       ;.equiv TQCKPS0, 0x0003
       ;.equiv TQCKPS1, 0x0004
       ;.equiv QEIM0,   0x0008
       ;.equiv QEIM1,   0x0009
       ;.equiv QEIM2,   0x000A


;----- DFLT1CON Bits -----------------------------------------------------
        .equiv QEOUT,   0x0007
        .equiv CEID,    0x0008

        .equiv QECK0,   0x0004
        .equiv QECK1,   0x0005
        .equiv QECK2,   0x0006
        .equiv IMV0,    0x0009
        .equiv IMV1,    0x000A


;----- DFLTCON Bits -----------------------------------------------------
       ;.equiv QEOUT,   0x0007
       ;.equiv CEID,    0x0008

       ;.equiv QECK0,   0x0004
       ;.equiv QECK1,   0x0005
       ;.equiv QECK2,   0x0006
       ;.equiv IMV0,    0x0009
       ;.equiv IMV1,    0x000A


;----- I2C1CON Bits -----------------------------------------------------
        .equiv SEN,     0x0000
        .equiv RSEN,    0x0001
        .equiv PEN,     0x0002
        .equiv RCEN,    0x0003
        .equiv ACKEN,   0x0004
        .equiv ACKDT,   0x0005
        .equiv STREN,   0x0006
        .equiv GCEN,    0x0007
        .equiv SMEN,    0x0008
        .equiv DISSLW,  0x0009
        .equiv A10M,    0x000A
        .equiv IPMIEN,  0x000B
        .equiv SCLREL,  0x000C
        .equiv I2CSIDL, 0x000D
        .equiv I2CEN,   0x000F


;----- I2CCON Bits -----------------------------------------------------
       ;.equiv SEN,     0x0000
       ;.equiv RSEN,    0x0001
       ;.equiv PEN,     0x0002
       ;.equiv RCEN,    0x0003
       ;.equiv ACKEN,   0x0004
       ;.equiv ACKDT,   0x0005
       ;.equiv STREN,   0x0006
       ;.equiv GCEN,    0x0007
       ;.equiv SMEN,    0x0008
       ;.equiv DISSLW,  0x0009
       ;.equiv A10M,    0x000A
       ;.equiv IPMIEN,  0x000B
       ;.equiv SCLREL,  0x000C
       ;.equiv I2CSIDL, 0x000D
       ;.equiv I2CEN,   0x000F


;----- I2C1STAT Bits -----------------------------------------------------
        .equiv TBF,     0x0000
        .equiv RBF,     0x0001
        .equiv R_W,     0x0002
        .equiv S,       0x0003
        .equiv P,       0x0004
        .equiv D_A,     0x0005
        .equiv I2COV,   0x0006
        .equiv IWCOL,   0x0007
        .equiv ADD10,   0x0008
        .equiv GCSTAT,  0x0009
        .equiv BCL,     0x000A
        .equiv TRSTAT,  0x000E
        .equiv ACKSTAT, 0x000F


;----- I2CSTAT Bits -----------------------------------------------------
       ;.equiv TBF,     0x0000
       ;.equiv RBF,     0x0001
       ;.equiv R_W,     0x0002
       ;.equiv S,       0x0003
       ;.equiv P,       0x0004
       ;.equiv D_A,     0x0005
       ;.equiv I2COV,   0x0006
       ;.equiv IWCOL,   0x0007
       ;.equiv ADD10,   0x0008
       ;.equiv GCSTAT,  0x0009
       ;.equiv BCL,     0x000A
       ;.equiv TRSTAT,  0x000E
       ;.equiv ACKSTAT, 0x000F


;----- U1MODE Bits -----------------------------------------------------
        .equiv STSEL,   0x0000
        .equiv BRGH,    0x0003
        .equiv URXINV,  0x0004
        .equiv ABAUD,   0x0005
        .equiv LPBACK,  0x0006
        .equiv WAKE,    0x0007
        .equiv RTSMD,   0x000B
        .equiv IREN,    0x000C
        .equiv USIDL,   0x000D
        .equiv UARTEN,  0x000F

        .equiv PDSEL0,  0x0001
        .equiv PDSEL1,  0x0002
        .equiv UEN0,    0x0008
        .equiv UEN1,    0x0009


;----- U1STA Bits -----------------------------------------------------
        .equiv URXDA,   0x0000
        .equiv OERR,    0x0001
        .equiv FERR,    0x0002
        .equiv PERR,    0x0003
        .equiv RIDLE,   0x0004
        .equiv ADDEN,   0x0005
        .equiv TRMT,    0x0008
        .equiv UTXBF,   0x0009
        .equiv UTXEN,   0x000A
        .equiv UTXBRK,  0x000B
        .equiv UTXISEL0, 0x000D
        .equiv UTXINV,  0x000E
        .equiv UTXISEL1, 0x000F

        .equiv URXISEL0, 0x0006
        .equiv URXISEL1, 0x0007


;----- U1TXREG Bits -----------------------------------------------------
        .equiv UTXREG0, 0x0000
        .equiv UTXREG1, 0x0001
        .equiv UTXREG2, 0x0002
        .equiv UTXREG3, 0x0003
        .equiv UTXREG4, 0x0004
        .equiv UTXREG5, 0x0005
        .equiv UTXREG6, 0x0006
        .equiv UTXREG7, 0x0007
        .equiv UTXREG8, 0x0008


;----- U1RXREG Bits -----------------------------------------------------
        .equiv URXREG0, 0x0000
        .equiv URXREG1, 0x0001
        .equiv URXREG2, 0x0002
        .equiv URXREG3, 0x0003
        .equiv URXREG4, 0x0004
        .equiv URXREG5, 0x0005
        .equiv URXREG6, 0x0006
        .equiv URXREG7, 0x0007
        .equiv URXREG8, 0x0008


;----- SPI1STAT Bits -----------------------------------------------------
        .equiv SPIRBF,  0x0000
        .equiv SPITBF,  0x0001
        .equiv SPIROV,  0x0006
        .equiv SPISIDL, 0x000D
        .equiv SPIEN,   0x000F


;----- SPI1CON1 Bits -----------------------------------------------------
        .equiv MSTEN,   0x0005
        .equiv CKP,     0x0006
        .equiv SSEN,    0x0007
        .equiv CKE,     0x0008
        .equiv SMP,     0x0009
        .equiv MODE16,  0x000A
        .equiv DISSDO,  0x000B
        .equiv DISSCK,  0x000C

        .equiv PPRE0,   0x0000
        .equiv PPRE1,   0x0001
        .equiv SPRE0,   0x0002
        .equiv SPRE1,   0x0003
        .equiv SPRE2,   0x0004


;----- SPI1CON2 Bits -----------------------------------------------------
        .equiv FRMDLY,  0x0001
        .equiv FRMPOL,  0x000D
        .equiv SPIFSD,  0x000E
        .equiv FRMEN,   0x000F


;----- TRISA Bits -----------------------------------------------------
        .equiv TRISA0,  0x0000
        .equiv TRISA1,  0x0001
        .equiv TRISA2,  0x0002
        .equiv TRISA3,  0x0003
        .equiv TRISA4,  0x0004


;----- PORTA Bits -----------------------------------------------------
        .equiv RA0,     0x0000
        .equiv RA1,     0x0001
        .equiv RA2,     0x0002
        .equiv RA3,     0x0003
        .equiv RA4,     0x0004


;----- LATA Bits -----------------------------------------------------
        .equiv LATA0,   0x0000
        .equiv LATA1,   0x0001
        .equiv LATA2,   0x0002
        .equiv LATA3,   0x0003
        .equiv LATA4,   0x0004


;----- ODCA Bits -----------------------------------------------------
        .equiv ODCA0,   0x0000
        .equiv ODCA1,   0x0001
        .equiv ODCA2,   0x0002
        .equiv ODCA3,   0x0003
        .equiv ODCA4,   0x0004


;----- TRISB Bits -----------------------------------------------------
        .equiv TRISB0,  0x0000
        .equiv TRISB1,  0x0001
        .equiv TRISB2,  0x0002
        .equiv TRISB3,  0x0003
        .equiv TRISB4,  0x0004
        .equiv TRISB5,  0x0005
        .equiv TRISB6,  0x0006
        .equiv TRISB7,  0x0007
        .equiv TRISB8,  0x0008
        .equiv TRISB9,  0x0009
        .equiv TRISB10, 0x000A
        .equiv TRISB11, 0x000B
        .equiv TRISB12, 0x000C
        .equiv TRISB13, 0x000D
        .equiv TRISB14, 0x000E
        .equiv TRISB15, 0x000F


;----- PORTB Bits -----------------------------------------------------
        .equiv RB0,     0x0000
        .equiv RB1,     0x0001
        .equiv RB2,     0x0002
        .equiv RB3,     0x0003
        .equiv RB4,     0x0004
        .equiv RB5,     0x0005
        .equiv RB6,     0x0006
        .equiv RB7,     0x0007
        .equiv RB8,     0x0008
        .equiv RB9,     0x0009
        .equiv RB10,    0x000A
        .equiv RB11,    0x000B
        .equiv RB12,    0x000C
        .equiv RB13,    0x000D
        .equiv RB14,    0x000E
        .equiv RB15,    0x000F


;----- LATB Bits -----------------------------------------------------
        .equiv LATB0,   0x0000
        .equiv LATB1,   0x0001
        .equiv LATB2,   0x0002
        .equiv LATB3,   0x0003
        .equiv LATB4,   0x0004
        .equiv LATB5,   0x0005
        .equiv LATB6,   0x0006
        .equiv LATB7,   0x0007
        .equiv LATB8,   0x0008
        .equiv LATB9,   0x0009
        .equiv LATB10,  0x000A
        .equiv LATB11,  0x000B
        .equiv LATB12,  0x000C
        .equiv LATB13,  0x000D
        .equiv LATB14,  0x000E
        .equiv LATB15,  0x000F


;----- ODCB Bits -----------------------------------------------------
        .equiv ODCB0,   0x0000
        .equiv ODCB1,   0x0001
        .equiv ODCB2,   0x0002
        .equiv ODCB3,   0x0003
        .equiv ODCB4,   0x0004
        .equiv ODCB5,   0x0005
        .equiv ODCB6,   0x0006
        .equiv ODCB7,   0x0007
        .equiv ODCB8,   0x0008
        .equiv ODCB9,   0x0009
        .equiv ODCB10,  0x000A
        .equiv ODCB11,  0x000B
        .equiv ODCB12,  0x000C
        .equiv ODCB13,  0x000D
        .equiv ODCB14,  0x000E
        .equiv ODCB15,  0x000F


;----- AD1CON1 Bits -----------------------------------------------------
        .equiv DONE,    0x0000
        .equiv SAMP,    0x0001
        .equiv ASAM,    0x0002
        .equiv SIMSAM,  0x0003
        .equiv AD12B,   0x000A
        .equiv ADSIDL,  0x000D
        .equiv ADON,    0x000F

        .equiv SSRC0,   0x0005
        .equiv SSRC1,   0x0006
        .equiv SSRC2,   0x0007
        .equiv FORM0,   0x0008
        .equiv FORM1,   0x0009


;----- AD1CON2 Bits -----------------------------------------------------
        .equiv ALTS,    0x0000
        .equiv BUFM,    0x0001
        .equiv BUFS,    0x0007
        .equiv CSCNA,   0x000A

        .equiv SMPI0,   0x0002
        .equiv SMPI1,   0x0003
        .equiv SMPI2,   0x0004
        .equiv SMPI3,   0x0005
        .equiv CHPS0,   0x0008
        .equiv CHPS1,   0x0009
        .equiv VCFG0,   0x000D
        .equiv VCFG1,   0x000E
        .equiv VCFG2,   0x000F


;----- AD1CON3 Bits -----------------------------------------------------
        .equiv ADRC,    0x000F

        .equiv ADCS0,   0x0000
        .equiv ADCS1,   0x0001
        .equiv ADCS2,   0x0002
        .equiv ADCS3,   0x0003
        .equiv ADCS4,   0x0004
        .equiv ADCS5,   0x0005
        .equiv ADCS6,   0x0006
        .equiv ADCS7,   0x0007
        .equiv SAMC0,   0x0008
        .equiv SAMC1,   0x0009
        .equiv SAMC2,   0x000A
        .equiv SAMC3,   0x000B
        .equiv SAMC4,   0x000C


;----- AD1CHS123 Bits -----------------------------------------------------
        .equiv CH123SA, 0x0000
        .equiv CH123SB, 0x0008

        .equiv CH123NA0, 0x0001
        .equiv CH123NA1, 0x0002
        .equiv CH123NB0, 0x0009
        .equiv CH123NB1, 0x000A


;----- AD1CHS0 Bits -----------------------------------------------------
        .equiv CH0NA,   0x0007
        .equiv CH0NB,   0x000F

        .equiv CH0SA0,  0x0000
        .equiv CH0SA1,  0x0001
        .equiv CH0SA2,  0x0002
        .equiv CH0SA3,  0x0003
        .equiv CH0SA4,  0x0004
        .equiv CH0SB0,  0x0008
        .equiv CH0SB1,  0x0009
        .equiv CH0SB2,  0x000A
        .equiv CH0SB3,  0x000B
        .equiv CH0SB4,  0x000C


;----- AD1PCFGL Bits -----------------------------------------------------
        .equiv PCFG0,   0x0000
        .equiv PCFG1,   0x0001
        .equiv PCFG2,   0x0002
        .equiv PCFG3,   0x0003
        .equiv PCFG4,   0x0004
        .equiv PCFG5,   0x0005


;----- ADPCFG Bits -----------------------------------------------------
       ;.equiv PCFG0,   0x0000
       ;.equiv PCFG1,   0x0001
       ;.equiv PCFG2,   0x0002
       ;.equiv PCFG3,   0x0003
       ;.equiv PCFG4,   0x0004
       ;.equiv PCFG5,   0x0005


;----- AD1CSSL Bits -----------------------------------------------------
        .equiv CSS0,    0x0000
        .equiv CSS1,    0x0001
        .equiv CSS2,    0x0002
        .equiv CSS3,    0x0003
        .equiv CSS4,    0x0004
        .equiv CSS5,    0x0005


;----- P2TCON Bits -----------------------------------------------------
       ;.equiv PTSIDL,  0x000D
       ;.equiv PTEN,    0x000F

       ;.equiv PTMOD0,  0x0000
       ;.equiv PTMOD1,  0x0001
       ;.equiv PTCKPS0, 0x0002
       ;.equiv PTCKPS1, 0x0003
       ;.equiv PTOPS0,  0x0004
       ;.equiv PTOPS1,  0x0005
       ;.equiv PTOPS2,  0x0006
       ;.equiv PTOPS3,  0x0007


;----- P2TMR Bits -----------------------------------------------------
       ;.equiv PTDIR,   0x000F


;----- P2SECMP Bits -----------------------------------------------------
       ;.equiv SEVTDIR, 0x000F


;----- PWM2CON1 Bits -----------------------------------------------------
       ;.equiv PEN1L,   0x0000
       ;.equiv PEN1H,   0x0004
       ;.equiv PMOD1,   0x0008


;----- PWM2CON2 Bits -----------------------------------------------------
       ;.equiv UDIS,    0x0000
       ;.equiv OSYNC,   0x0001
       ;.equiv IUE,     0x0002

       ;.equiv SEVOPS0, 0x0008
       ;.equiv SEVOPS1, 0x0009
       ;.equiv SEVOPS2, 0x000A
       ;.equiv SEVOPS3, 0x000B


;----- P2DTCON1 Bits -----------------------------------------------------
       ;.equiv DTA0,    0x0000
       ;.equiv DTA1,    0x0001
       ;.equiv DTA2,    0x0002
       ;.equiv DTA3,    0x0003
       ;.equiv DTA4,    0x0004
       ;.equiv DTA5,    0x0005
       ;.equiv DTAPS0,  0x0006
       ;.equiv DTAPS1,  0x0007
       ;.equiv DTB0,    0x0008
       ;.equiv DTB1,    0x0009
       ;.equiv DTB2,    0x000A
       ;.equiv DTB3,    0x000B
       ;.equiv DTB4,    0x000C
       ;.equiv DTB5,    0x000D
       ;.equiv DTBPS0,  0x000E
       ;.equiv DTBPS1,  0x000F


;----- P2DTCON2 Bits -----------------------------------------------------
       ;.equiv DTS1I,   0x0000
       ;.equiv DTS1A,   0x0001


;----- P2FLTACON Bits -----------------------------------------------------
       ;.equiv FAEN1,   0x0000
       ;.equiv FLTAM,   0x0007
       ;.equiv FAOV1L,  0x0008
       ;.equiv FAOV1H,  0x0009


;----- P2OVDCON Bits -----------------------------------------------------
       ;.equiv POUT1L,  0x0000
       ;.equiv POUT1H,  0x0001
       ;.equiv POVD1L,  0x0008
       ;.equiv POVD1H,  0x0009


;----- RPINR0 Bits -----------------------------------------------------
        .equiv INT1R0,  0x0008
        .equiv INT1R1,  0x0009
        .equiv INT1R2,  0x000A
        .equiv INT1R3,  0x000B
        .equiv INT1R4,  0x000C


;----- RPINR1 Bits -----------------------------------------------------
        .equiv INT2R0,  0x0000
        .equiv INT2R1,  0x0001
        .equiv INT2R2,  0x0002
        .equiv INT2R3,  0x0003
        .equiv INT2R4,  0x0004


;----- RPINR3 Bits -----------------------------------------------------
        .equiv T2CKR0,  0x0000
        .equiv T2CKR1,  0x0001
        .equiv T2CKR2,  0x0002
        .equiv T2CKR3,  0x0003
        .equiv T2CKR4,  0x0004
        .equiv T3CKR0,  0x0008
        .equiv T3CKR1,  0x0009
        .equiv T3CKR2,  0x000A
        .equiv T3CKR3,  0x000B
        .equiv T3CKR4,  0x000C


;----- RPINR7 Bits -----------------------------------------------------
        .equiv IC1R0,   0x0000
        .equiv IC1R1,   0x0001
        .equiv IC1R2,   0x0002
        .equiv IC1R3,   0x0003
        .equiv IC1R4,   0x0004
        .equiv IC2R0,   0x0008
        .equiv IC2R1,   0x0009
        .equiv IC2R2,   0x000A
        .equiv IC2R3,   0x000B
        .equiv IC2R4,   0x000C


;----- RPINR10 Bits -----------------------------------------------------
        .equiv IC7R0,   0x0000
        .equiv IC7R1,   0x0001
        .equiv IC7R2,   0x0002
        .equiv IC7R3,   0x0003
        .equiv IC7R4,   0x0004
        .equiv IC8R0,   0x0008
        .equiv IC8R1,   0x0009
        .equiv IC8R2,   0x000A
        .equiv IC8R3,   0x000B
        .equiv IC8R4,   0x000C


;----- RPINR11 Bits -----------------------------------------------------
        .equiv OCFAR0,  0x0000
        .equiv OCFAR1,  0x0001
        .equiv OCFAR2,  0x0002
        .equiv OCFAR3,  0x0003
        .equiv OCFAR4,  0x0004


;----- RPINR12 Bits -----------------------------------------------------
        .equiv FLTA1R0, 0x0000
        .equiv FLTA1R1, 0x0001
        .equiv FLTA1R2, 0x0002
        .equiv FLTA1R3, 0x0003
        .equiv FLTA1R4, 0x0004


;----- RPINR13 Bits -----------------------------------------------------
        .equiv FLTA2R0, 0x0000
        .equiv FLTA2R1, 0x0001
        .equiv FLTA2R2, 0x0002
        .equiv FLTA2R3, 0x0003
        .equiv FLTA2R4, 0x0004


;----- RPINR14 Bits -----------------------------------------------------
        .equiv QEA1R0,  0x0000
        .equiv QEA1R1,  0x0001
        .equiv QEA1R2,  0x0002
        .equiv QEA1R3,  0x0003
        .equiv QEA1R4,  0x0004
        .equiv QEB1R0,  0x0008
        .equiv QEB1R1,  0x0009
        .equiv QEB1R2,  0x000A
        .equiv QEB1R3,  0x000B
        .equiv QEB1R4,  0x000C


;----- RPINR15 Bits -----------------------------------------------------
        .equiv INDX1R0, 0x0000
        .equiv INDX1R1, 0x0001
        .equiv INDX1R2, 0x0002
        .equiv INDX1R3, 0x0003
        .equiv INDX1R4, 0x0004


;----- RPINR18 Bits -----------------------------------------------------
        .equiv U1RXR0,  0x0000
        .equiv U1RXR1,  0x0001
        .equiv U1RXR2,  0x0002
        .equiv U1RXR3,  0x0003
        .equiv U1RXR4,  0x0004
        .equiv U1CTSR0, 0x0008
        .equiv U1CTSR1, 0x0009
        .equiv U1CTSR2, 0x000A
        .equiv U1CTSR3, 0x000B
        .equiv U1CTSR4, 0x000C


;----- RPINR20 Bits -----------------------------------------------------
        .equiv SDI1R0,  0x0000
        .equiv SDI1R1,  0x0001
        .equiv SDI1R2,  0x0002
        .equiv SDI1R3,  0x0003
        .equiv SDI1R4,  0x0004
        .equiv SCK1R0,  0x0008
        .equiv SCK1R1,  0x0009
        .equiv SCK1R2,  0x000A
        .equiv SCK1R3,  0x000B
        .equiv SCK1R4,  0x000C


;----- RPINR21 Bits -----------------------------------------------------
        .equiv SS1R0,   0x0000
        .equiv SS1R1,   0x0001
        .equiv SS1R2,   0x0002
        .equiv SS1R3,   0x0003
        .equiv SS1R4,   0x0004


;----- RPOR0 Bits -----------------------------------------------------
        .equiv RP0R0,   0x0000
        .equiv RP0R1,   0x0001
        .equiv RP0R2,   0x0002
        .equiv RP0R3,   0x0003
        .equiv RP0R4,   0x0004
        .equiv RP1R0,   0x0008
        .equiv RP1R1,   0x0009
        .equiv RP1R2,   0x000A
        .equiv RP1R3,   0x000B
        .equiv RP1R4,   0x000C


;----- RPOR1 Bits -----------------------------------------------------
        .equiv RP2R0,   0x0000
        .equiv RP2R1,   0x0001
        .equiv RP2R2,   0x0002
        .equiv RP2R3,   0x0003
        .equiv RP2R4,   0x0004
        .equiv RP3R0,   0x0008
        .equiv RP3R1,   0x0009
        .equiv RP3R2,   0x000A
        .equiv RP3R3,   0x000B
        .equiv RP3R4,   0x000C


;----- RPOR2 Bits -----------------------------------------------------
        .equiv RP4R0,   0x0000
        .equiv RP4R1,   0x0001
        .equiv RP4R2,   0x0002
        .equiv RP4R3,   0x0003
        .equiv RP4R4,   0x0004
        .equiv RP5R0,   0x0008
        .equiv RP5R1,   0x0009
        .equiv RP5R2,   0x000A
        .equiv RP5R3,   0x000B
        .equiv RP5R4,   0x000C


;----- RPOR3 Bits -----------------------------------------------------
        .equiv RP6R0,   0x0000
        .equiv RP6R1,   0x0001
        .equiv RP6R2,   0x0002
        .equiv RP6R3,   0x0003
        .equiv RP6R4,   0x0004
        .equiv RP7R0,   0x0008
        .equiv RP7R1,   0x0009
        .equiv RP7R2,   0x000A
        .equiv RP7R3,   0x000B
        .equiv RP7R4,   0x000C


;----- RPOR4 Bits -----------------------------------------------------
        .equiv RP8R0,   0x0000
        .equiv RP8R1,   0x0001
        .equiv RP8R2,   0x0002
        .equiv RP8R3,   0x0003
        .equiv RP8R4,   0x0004
        .equiv RP9R0,   0x0008
        .equiv RP9R1,   0x0009
        .equiv RP9R2,   0x000A
        .equiv RP9R3,   0x000B
        .equiv RP9R4,   0x000C


;----- RPOR5 Bits -----------------------------------------------------
        .equiv RP10R0,  0x0000
        .equiv RP10R1,  0x0001
        .equiv RP10R2,  0x0002
        .equiv RP10R3,  0x0003
        .equiv RP10R4,  0x0004
        .equiv RP11R0,  0x0008
        .equiv RP11R1,  0x0009
        .equiv RP11R2,  0x000A
        .equiv RP11R3,  0x000B
        .equiv RP11R4,  0x000C


;----- RPOR6 Bits -----------------------------------------------------
        .equiv RP12R0,  0x0000
        .equiv RP12R1,  0x0001
        .equiv RP12R2,  0x0002
        .equiv RP12R3,  0x0003
        .equiv RP12R4,  0x0004
        .equiv RP13R0,  0x0008
        .equiv RP13R1,  0x0009
        .equiv RP13R2,  0x000A
        .equiv RP13R3,  0x000B
        .equiv RP13R4,  0x000C


;----- RPOR7 Bits -----------------------------------------------------
        .equiv RP14R0,  0x0000
        .equiv RP14R1,  0x0001
        .equiv RP14R2,  0x0002
        .equiv RP14R3,  0x0003
        .equiv RP14R4,  0x0004
        .equiv RP15R0,  0x0008
        .equiv RP15R1,  0x0009
        .equiv RP15R2,  0x000A
        .equiv RP15R3,  0x000B
        .equiv RP15R4,  0x000C


;----- RCON Bits -----------------------------------------------------
        .equiv POR,     0x0000
        .equiv BOR,     0x0001
        .equiv IDLE,    0x0002
        .equiv SLEEP,   0x0003
        .equiv WDTO,    0x0004
        .equiv SWDTEN,  0x0005
        .equiv SWR,     0x0006
        .equiv EXTR,    0x0007
        .equiv VREGS,   0x0008
        .equiv CM,      0x0009
        .equiv IOPUWR,  0x000E
        .equiv TRAPR,   0x000F


;----- OSCCON Bits -----------------------------------------------------
        .equiv OSWEN,   0x0000
        .equiv LPOSCEN, 0x0001
        .equiv CF,      0x0003
        .equiv LOCK,    0x0005
        .equiv IOLOCK,  0x0006
        .equiv CLKLOCK, 0x0007

        .equiv NOSC0,   0x0008
        .equiv NOSC1,   0x0009
        .equiv NOSC2,   0x000A
        .equiv COSC0,   0x000C
        .equiv COSC1,   0x000D
        .equiv COSC2,   0x000E


;----- CLKDIV Bits -----------------------------------------------------
        .equiv DOZEN,   0x000B
        .equiv ROI,     0x000F

        .equiv PLLPRE0, 0x0000
        .equiv PLLPRE1, 0x0001
        .equiv PLLPRE2, 0x0002
        .equiv PLLPRE3, 0x0003
        .equiv PLLPRE4, 0x0004
        .equiv PLLPOST0, 0x0006
        .equiv PLLPOST1, 0x0007
        .equiv FRCDIV0, 0x0008
        .equiv FRCDIV1, 0x0009
        .equiv FRCDIV2, 0x000A
        .equiv DOZE0,   0x000C
        .equiv DOZE1,   0x000D
        .equiv DOZE2,   0x000E


;----- PLLFBD Bits -----------------------------------------------------
        .equiv PLLDIV0, 0x0000
        .equiv PLLDIV1, 0x0001
        .equiv PLLDIV2, 0x0002
        .equiv PLLDIV3, 0x0003
        .equiv PLLDIV4, 0x0004
        .equiv PLLDIV5, 0x0005
        .equiv PLLDIV6, 0x0006
        .equiv PLLDIV7, 0x0007
        .equiv PLLDIV8, 0x0008


;----- OSCTUN Bits -----------------------------------------------------
        .equiv TUN0,    0x0000
        .equiv TUN1,    0x0001
        .equiv TUN2,    0x0002
        .equiv TUN3,    0x0003
        .equiv TUN4,    0x0004
        .equiv TUN5,    0x0005


;----- NVMCON Bits -----------------------------------------------------
        .equiv ERASE,   0x0006
        .equiv WRERR,   0x000D
        .equiv WREN,    0x000E
        .equiv WR,      0x000F

        .equiv NVMOP0,  0x0000
        .equiv NVMOP1,  0x0001
        .equiv NVMOP2,  0x0002
        .equiv NVMOP3,  0x0003


;----- PMD1 Bits -----------------------------------------------------
        .equiv AD1MD,   0x0000
        .equiv SPI1MD,  0x0003
        .equiv U1MD,    0x0005
        .equiv I2C1MD,  0x0007
        .equiv PWM1MD,  0x0009
        .equiv QEIMD,   0x000A
        .equiv T1MD,    0x000B
        .equiv T2MD,    0x000C
        .equiv T3MD,    0x000D


;----- PMD2 Bits -----------------------------------------------------
        .equiv OC1MD,   0x0000
        .equiv OC2MD,   0x0001
        .equiv IC1MD,   0x0008
        .equiv IC2MD,   0x0009
        .equiv IC7MD,   0x000E
        .equiv IC8MD,   0x000F


;----- PMD3 Bits -----------------------------------------------------
        .equiv PWM2MD,  0x0004




;  Some useful macros for PWRSAV instructions

   .equiv SLEEP_MODE, 0x0
   .equiv IDLE_MODE, 0x1


;==========================================================================
;
;   Configuration Words
;
;   Configuration words exist in Program Space and their locations are
;   defined in the device linker script. They can be set in source code
;   or in the MPLAB IDE. Each configuration word should be specified
;   only once (multiple settings may be combined.)
;
;==========================================================================
;
;  Setting configuration words using macros:
;
;  The following macro named 'config' can be used to set configuration words:
;==========================================================================
;  NOTICE: CONFIG MACRO IS ****D E P R E C A T E D****
;  Please use #pragma in a separate C file in the project.
;  Some features in linker and compiler cannot use values
;  set using this method. Please migrate to #pragma config method.
;==========================================================================
;
        .macro config REG, VALUE
        .pushsection \REG.sec, code
        .global \REG
        .warn "DEPRECATED. Please use #pragma config in a C file"
\REG:   .pword \VALUE
        .popsection
        .endm
;
;  For example, to set CONFIG_REG using the macro above, the following line
;  can be pasted only at the beginning of the assembly source code,
;  immediately below the '.include' directive.
;
;        config __CONFIG_REG, SETTING_A & SETTING_B
;
;  Note that the 'config' macro takes two arguments: the first is the name
;  of a configuration word (in this case, __CONFIG_REG), the second argument
;  is a boolean expression that may include multiple settings.
;  The example above would enable SETTING_A and also SETTING_B.
;
;  A description of all possible settings for each configuration word
;  appears below.
;
;==========================================================================
;
;  Setting configuration words without using macros:
;
;  To set configuration words without using the 'config' macro,
;  use the following format:
;
;           .section __CONFIG_REG.sec, code
;           .global __CONFIG_REG
;__CONFIG_REG: .pword SETTING_A & SETTING_B
;
;  This source code is equivalent to the expanded macro from the previous
;  example.
;
;==========================================================================


;----- FBS (0xf80000) --------------------------------------------------
;
;  The following settings are available for FBS:
;
;   Boot Segment Write Protect:
;     BWRP_WRPROTECT_ON    Boot segment is write-protected
;     BWRP_WRPROTECT_OFF   Boot Segment may be written
;
;   Boot Segment Program Flash Code Protection:
;     BSS_LARGE_FLASH_HIGH High Security, Large-sized Boot Flash
;     BSS_HIGH_LARGE_BOOT_CODEHigh Security, Large-sized Boot Flash
;     BSS_MEDIUM_FLASH_HIGHHigh Security, Medium-sized Boot Flash
;     BSS_HIGH_MEDIUM_BOOT_CODEHigh Security, Medium-sized Boot Flash
;     BSS_SMALL_FLASH_HIGH High Security, Small-sized Boot Flash
;     BSS_HIGH_SMALL_BOOT_CODEHigh Security, Small-sized Boot Flash
;     BSS_LARGE_FLASH_STD  Standard Security, Large-sized Boot Flash
;     BSS_STRD_LARGE_BOOT_CODEStandard Security, Large-sized Boot Flash
;     BSS_MEDIUM_FLASH_STD Standard Security, Medium-sized Boot Flash
;     BSS_STRD_MEDIUM_BOOT_CODEStandard Security, Medium-sized Boot Flash
;     BSS_SMALL_FLASH_STD  Standard Security, Small-sized Boot Flash
;     BSS_STRD_SMALL_BOOT_CODEStandard Security, Small-sized Boot Flash
;     BSS_NO_FLASH         No Boot program Flash segment
;     BSS_NO_BOOT_CODE     No Boot program Flash segment
;
        .equiv BWRP_WRPROTECT_ON, 0xFFFE ; Boot segment is write-protected
        .equiv BWRP_WRPROTECT_OFF, 0xFFFF ; Boot Segment may be written

        .equiv BSS_LARGE_FLASH_HIGH, 0xFFF1 ; High Security, Large-sized Boot Flash
        .equiv BSS_HIGH_LARGE_BOOT_CODE, 0xFFF1 ; High Security, Large-sized Boot Flash
        .equiv BSS_MEDIUM_FLASH_HIGH, 0xFFF3 ; High Security, Medium-sized Boot Flash
        .equiv BSS_HIGH_MEDIUM_BOOT_CODE, 0xFFF3 ; High Security, Medium-sized Boot Flash
        .equiv BSS_SMALL_FLASH_HIGH, 0xFFF5 ; High Security, Small-sized Boot Flash
        .equiv BSS_HIGH_SMALL_BOOT_CODE, 0xFFF5 ; High Security, Small-sized Boot Flash
        .equiv BSS_LARGE_FLASH_STD, 0xFFF9 ; Standard Security, Large-sized Boot Flash
        .equiv BSS_STRD_LARGE_BOOT_CODE, 0xFFF9 ; Standard Security, Large-sized Boot Flash
        .equiv BSS_MEDIUM_FLASH_STD, 0xFFFB ; Standard Security, Medium-sized Boot Flash
        .equiv BSS_STRD_MEDIUM_BOOT_CODE, 0xFFFB ; Standard Security, Medium-sized Boot Flash
        .equiv BSS_SMALL_FLASH_STD, 0xFFFD ; Standard Security, Small-sized Boot Flash
        .equiv BSS_STRD_SMALL_BOOT_CODE, 0xFFFD ; Standard Security, Small-sized Boot Flash
        .equiv BSS_NO_FLASH,    0xFFFF ; No Boot program Flash segment
        .equiv BSS_NO_BOOT_CODE, 0xFFFF ; No Boot program Flash segment


;----- FGS (0xf80004) --------------------------------------------------
;
;  The following settings are available for FGS:
;
;   General Code Segment Write Protect:
;     GWRP_ON              User program memory is write-protected
;     GWRP_OFF             User program memory is not write-protected
;
;   General Segment Code Protection:
;     GSS_HIGH             High Security Code Protection is Enabled
;     GSS_STD              Standard Security Code Protection is Enabled
;     GCP_ON               Standard Security Code Protection is Enabled
;     GSS_OFF              User program memory is not code-protected
;     GCP_OFF              User program memory is not code-protected
;
        .equiv GWRP_ON,         0xFFFE ; User program memory is write-protected
        .equiv GWRP_OFF,        0xFFFF ; User program memory is not write-protected

        .equiv GSS_HIGH,        0xFFFB ; High Security Code Protection is Enabled
        .equiv GSS_STD,         0xFFFD ; Standard Security Code Protection is Enabled
        .equiv GCP_ON,          0xFFFD ; Standard Security Code Protection is Enabled
        .equiv GSS_OFF,         0xFFFF ; User program memory is not code-protected
        .equiv GCP_OFF,         0xFFFF ; User program memory is not code-protected


;----- FOSCSEL (0xf80006) --------------------------------------------------
;
;  The following settings are available for FOSCSEL:
;
;   Oscillator Mode:
;     FNOSC_FRC            Internal Fast RC (FRC)
;     FNOSC_FRCPLL         Internal Fast RC (FRC) w/ PLL
;     FNOSC_PRI            Primary Oscillator (XT, HS, EC)
;     FNOSC_PRIPLL         Primary Oscillator (XT, HS, EC) w/ PLL
;     FNOSC_SOSC           Secondary Oscillator (SOSC)
;     FNOSC_LPRC           Low Power RC Oscillator (LPRC)
;     FNOSC_FRCDIV16       Internal Fast RC (FRC) divide by 16
;     FNOSC_LPRCDIVN       Internal Fast RC (FRC) with divide by N
;
;   Internal External Switch Over Mode:
;     IESO_OFF             Start-up device with user-selected oscillator source
;     IESO_ON              Start-up device with FRC, then automatically switch to user-selected oscillator source when ready
;
        .equiv FNOSC_FRC,       0xFFF8 ; Internal Fast RC (FRC)
        .equiv FNOSC_FRCPLL,    0xFFF9 ; Internal Fast RC (FRC) w/ PLL
        .equiv FNOSC_PRI,       0xFFFA ; Primary Oscillator (XT, HS, EC)
        .equiv FNOSC_PRIPLL,    0xFFFB ; Primary Oscillator (XT, HS, EC) w/ PLL
        .equiv FNOSC_SOSC,      0xFFFC ; Secondary Oscillator (SOSC)
        .equiv FNOSC_LPRC,      0xFFFD ; Low Power RC Oscillator (LPRC)
        .equiv FNOSC_FRCDIV16,  0xFFFE ; Internal Fast RC (FRC) divide by 16
        .equiv FNOSC_LPRCDIVN,  0xFFFF ; Internal Fast RC (FRC) with divide by N

        .equiv IESO_OFF,        0xFF7F ; Start-up device with user-selected oscillator source
        .equiv IESO_ON,         0xFFFF ; Start-up device with FRC, then automatically switch to user-selected oscillator source when ready


;----- FOSC (0xf80008) --------------------------------------------------
;
;  The following settings are available for FOSC:
;
;   Primary Oscillator Source:
;     POSCMD_EC            EC Oscillator Mode
;     POSCMD_XT            XT Oscillator Mode
;     POSCMD_HS            HS Oscillator Mode
;     POSCMD_NONE          Primary Oscillator Disabled
;
;   OSC2 Pin Function:
;     OSCIOFNC_ON          OSC2 pin has digital I/O function
;     OSCIOFNC_OFF         OSC2 pin has clock out function
;
;   Peripheral Pin Select Configuration:
;     IOL1WAY_OFF          Allow Multiple Re-configurations
;     IOL1WAY_ON           Allow Only One Re-configuration
;
;   Clock Switching and Monitor:
;     FCKSM_CSECME         Both Clock Switching and Fail-Safe Clock Monitor are enabled
;     FCKSM_CSECMD         Clock switching is enabled, Fail-Safe Clock Monitor is disabled
;     FCKSM_CSDCMD         Both Clock Switching and Fail-Safe Clock Monitor are disabled
;
        .equiv POSCMD_EC,       0xFFFC ; EC Oscillator Mode
        .equiv POSCMD_XT,       0xFFFD ; XT Oscillator Mode
        .equiv POSCMD_HS,       0xFFFE ; HS Oscillator Mode
        .equiv POSCMD_NONE,     0xFFFF ; Primary Oscillator Disabled

        .equiv OSCIOFNC_ON,     0xFFFB ; OSC2 pin has digital I/O function
        .equiv OSCIOFNC_OFF,    0xFFFF ; OSC2 pin has clock out function

        .equiv IOL1WAY_OFF,     0xFFDF ; Allow Multiple Re-configurations
        .equiv IOL1WAY_ON,      0xFFFF ; Allow Only One Re-configuration

        .equiv FCKSM_CSECME,    0xFF3F ; Both Clock Switching and Fail-Safe Clock Monitor are enabled
        .equiv FCKSM_CSECMD,    0xFF7F ; Clock switching is enabled, Fail-Safe Clock Monitor is disabled
        .equiv FCKSM_CSDCMD,    0xFFBF ; Both Clock Switching and Fail-Safe Clock Monitor are disabled


;----- FWDT (0xf8000a) --------------------------------------------------
;
;  The following settings are available for FWDT:
;
;   Watchdog Timer Postscaler:
;     WDTPOST_PS1          1:1
;     WDTPOST_PS2          1:2
;     WDTPOST_PS4          1:4
;     WDTPOST_PS8          1:8
;     WDTPOST_PS16         1:16
;     WDTPOST_PS32         1:32
;     WDTPOST_PS64         1:64
;     WDTPOST_PS128        1:128
;     WDTPOST_PS256        1:256
;     WDTPOST_PS512        1:512
;     WDTPOST_PS1024       1:1,024
;     WDTPOST_PS2048       1:2,048
;     WDTPOST_PS4096       1:4,096
;     WDTPOST_PS8192       1:8,192
;     WDTPOST_PS16384      1:16,384
;     WDTPOST_PS32768      1:32,768
;
;   WDT Prescaler:
;     WDTPRE_PR32          1:32
;     WDTPRE_PR128         1:128
;
;   Watchdog Timer Window:
;     WINDIS_ON            Watchdog Timer in Window mode
;     WINDIS_OFF           Watchdog Timer in Non-Window mode
;
;   Watchdog Timer Enable:
;     FWDTEN_OFF           Watchdog timer enabled/disabled by user software
;     FWDTEN_ON            Watchdog timer always enabled
;
        .equiv WDTPOST_PS1,     0xFFF0 ; 1:1
        .equiv WDTPOST_PS2,     0xFFF1 ; 1:2
        .equiv WDTPOST_PS4,     0xFFF2 ; 1:4
        .equiv WDTPOST_PS8,     0xFFF3 ; 1:8
        .equiv WDTPOST_PS16,    0xFFF4 ; 1:16
        .equiv WDTPOST_PS32,    0xFFF5 ; 1:32
        .equiv WDTPOST_PS64,    0xFFF6 ; 1:64
        .equiv WDTPOST_PS128,   0xFFF7 ; 1:128
        .equiv WDTPOST_PS256,   0xFFF8 ; 1:256
        .equiv WDTPOST_PS512,   0xFFF9 ; 1:512
        .equiv WDTPOST_PS1024,  0xFFFA ; 1:1,024
        .equiv WDTPOST_PS2048,  0xFFFB ; 1:2,048
        .equiv WDTPOST_PS4096,  0xFFFC ; 1:4,096
        .equiv WDTPOST_PS8192,  0xFFFD ; 1:8,192
        .equiv WDTPOST_PS16384, 0xFFFE ; 1:16,384
        .equiv WDTPOST_PS32768, 0xFFFF ; 1:32,768

        .equiv WDTPRE_PR32,     0xFFEF ; 1:32
        .equiv WDTPRE_PR128,    0xFFFF ; 1:128

        .equiv WINDIS_ON,       0xFFBF ; Watchdog Timer in Window mode
        .equiv WINDIS_OFF,      0xFFFF ; Watchdog Timer in Non-Window mode

        .equiv FWDTEN_OFF,      0xFF7F ; Watchdog timer enabled/disabled by user software
        .equiv FWDTEN_ON,       0xFFFF ; Watchdog timer always enabled


;----- FPOR (0xf8000c) --------------------------------------------------
;
;  The following settings are available for FPOR:
;
;   POR Timer Value:
;     FPWRT_PWR1           Disabled
;     FPWRT_PWR2           2ms
;     FPWRT_PWR4           4ms
;     FPWRT_PWR8           8ms
;     FPWRT_PWR16          16ms
;     FPWRT_PWR32          32ms
;     FPWRT_PWR64          64ms
;     FPWRT_PWR128         128ms
;
;   Alternate I2C  pins:
;     ALTI2C_ON            I2C mapped to ASDA1/ASCL1 pins
;     ALTI2C_OFF           I2C mapped to SDA1/SCL1 pins
;
;   Motor Control PWM Low Side Polarity bit:
;     LPOL_OFF             PWM module low side output pins have active-low output polarity
;     LPOL_ON              PWM module low side output pins have active-high output polarity
;
;   Motor Control PWM High Side Polarity bit:
;     HPOL_OFF             PWM module high side output pins have active-low output polarity
;     HPOL_ON              PWM module high side output pins have active-high output polarity
;
;   Motor Control PWM Module Pin Mode bit:
;     PWMPIN_OFF           PWM module pins controlled by PWM module at device Reset
;     PWMPIN_ON            PWM module pins controlled by PORT register at device Reset
;
        .equiv FPWRT_PWR1,      0xFFF8 ; Disabled
        .equiv FPWRT_PWR2,      0xFFF9 ; 2ms
        .equiv FPWRT_PWR4,      0xFFFA ; 4ms
        .equiv FPWRT_PWR8,      0xFFFB ; 8ms
        .equiv FPWRT_PWR16,     0xFFFC ; 16ms
        .equiv FPWRT_PWR32,     0xFFFD ; 32ms
        .equiv FPWRT_PWR64,     0xFFFE ; 64ms
        .equiv FPWRT_PWR128,    0xFFFF ; 128ms

        .equiv ALTI2C_ON,       0xFFEF ; I2C mapped to ASDA1/ASCL1 pins
        .equiv ALTI2C_OFF,      0xFFFF ; I2C mapped to SDA1/SCL1 pins

        .equiv LPOL_OFF,        0xFFDF ; PWM module low side output pins have active-low output polarity
        .equiv LPOL_ON,         0xFFFF ; PWM module low side output pins have active-high output polarity

        .equiv HPOL_OFF,        0xFFBF ; PWM module high side output pins have active-low output polarity
        .equiv HPOL_ON,         0xFFFF ; PWM module high side output pins have active-high output polarity

        .equiv PWMPIN_OFF,      0xFF7F ; PWM module pins controlled by PWM module at device Reset
        .equiv PWMPIN_ON,       0xFFFF ; PWM module pins controlled by PORT register at device Reset


;----- FICD (0xf8000e) --------------------------------------------------
;
;  The following settings are available for FICD:
;
;   Comm Channel Select:
;     ICS_PGD3             Communicate on PGC3/EMUC3 and PGD3/EMUD3
;     ICS_PGD2             Communicate on PGC2/EMUC2 and PGD2/EMUD2
;     ICS_PGD1             Communicate on PGC1/EMUC1 and PGD1/EMUD1
;
;   JTAG Port Enable:
;     JTAGEN_OFF           JTAG is Disabled
;     JTAGEN_ON            JTAG is Enabled
;
        .equiv ICS_PGD3,        0xFFFD ; Communicate on PGC3/EMUC3 and PGD3/EMUD3
        .equiv ICS_PGD2,        0xFFFE ; Communicate on PGC2/EMUC2 and PGD2/EMUD2
        .equiv ICS_PGD1,        0xFFFF ; Communicate on PGC1/EMUC1 and PGD1/EMUD1

        .equiv JTAGEN_OFF,      0xFFDF ; JTAG is Disabled
        .equiv JTAGEN_ON,       0xFFFF ; JTAG is Enabled


;----- FUID0 (0xf80010) --------------------------------------------------
;
;  The following settings are available for FUID0:
;
;   :
;


;----- FUID1 (0xf80012) --------------------------------------------------
;
;  The following settings are available for FUID1:
;
;   :
;


;----- FUID2 (0xf80014) --------------------------------------------------
;
;  The following settings are available for FUID2:
;
;   :
;


;----- FUID3 (0xf80016) --------------------------------------------------
;
;  The following settings are available for FUID3:
;
;   :
;


.LIST
.endif
