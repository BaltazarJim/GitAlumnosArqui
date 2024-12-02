/* 
 * File:   mainBlink202.c
 * Author: Baltazar
 *
 * Created on May 11, 2023, 17:00 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "ConfigFOSC.h"
#include <libpic30.h>
#include <xc.h>
#include <math.h>

/*
 * 
 */
void blink(void);
void go_n_back();
uint8_t i;

int main(int argc, char** argv) {
    AD1PCFGL = 0XFFFF;  //Configure pins ANX as digital (5 Analog pins))
    TRISB = 0XFF00;     //Configure PORTB <15:8> as inputs and <7:0> as ouputs
    
    //blink();
    go_n_back();
    
    return (EXIT_SUCCESS);
}

void blink(void)
{
    for (i=4 ; i>0 ; i--)
    {
        PORTB ^=0X00FF;
        __delay_ms(500);
    }    
    
    for( ; ; )
    {
        
    }
}
void go_n_back()
{
    for(;;)
    {
        for (i=8; i>0; i--)
        {
            LATB = pow(2,i)-1;
            __delay_ms(100);        
        }
        
        for (i=0; i<=8; i++)
        {
            LATB = pow(2,i)-1;
            __delay_ms(100);        
        }
    }
}

