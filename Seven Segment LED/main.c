/*
 * File:   main.c
 * Author: robda
 *
 * Created on 12 October 2020, 22:31
 */


#include <xc.h>
#pragma config FOSC = HS
#pragma config WDTE = OFF
#pragma config PWRTE = ON
#pragma config BOREN = OFF
#pragma config LVP = OFF


#define ZERO    0xC0
#define ONE     0xF9
#define TWO     0xA4
#define THREE   0xB0
#define FOUR    0x99
#define FIVE    0x92
#define SIX     0x82
#define SEVEN   0xD8
#define EIGHT   0x80
#define NINE    0x98


void delay()
{
    for(unsigned int i = 0x300;--i;);
    
}

void main(void) {
    ADCON1 = 0x07;
    TRISA = 0x00;   //All pins set to OUTPUT
    TRISD = 0x00;
    while (1)
    {

        PORTA = 0xFE;   //
        PORTD = ZERO;   //LED SEGMENT A - G
        
        delay();
        
        PORTA = 0xFD;
        PORTD = ONE;   //LED SEGMENT A - G
        
        delay();
        
        PORTA = 0xFB;
        PORTD = TWO;   //LED SEGMENT A - G

        delay();
        
        PORTA = 0xF7;
        PORTD = THREE;   //LED SEGMENT A - G

        delay();
        
        PORTA = 0xEF;
        PORTD = FOUR;   //LED SEGMENT A - G
        
        delay();
        
        PORTA = 0xDF;
        PORTD = FIVE;   //LED SEGMENT A - G

        delay();
//        for(int i = 0; i < 8; ++i)
//        {
//            PORTA = 1<<i;
//            delay();
//        }
    }
    return;
}
