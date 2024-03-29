/*	Author: adevi002
 *	 *  Partner(s) Name: Alexander DeVictoria
 *	  *	Lab Section:
 *	   *	Assignment: Lab #  Exercise #
 *	    *	Exercise Description: [optional - include for your own benefit]
 *	     *
 *	      *	I acknowledge all content contained herein, excluding template or example
 *	       *	code, is my own original work.
 *	        */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    DDRA = 0x00;  PORTA = 0xFF;
    DDRB = 0xFF;  PORTB = 0x00;
    
    unsigned char tmpB = 0x00;
    unsigned char tmpA = 0x00; /* Insert your solution below */
    while (1) {
		tmpA = 0x00;
		tmpB = 0x00;
		
		tmpA = PINA;
		
		if (tmpA == 0x01) {
			tmpB = 0x01;
	    } else {
			tmpB = 0x00;
	    }
	    PORTB = tmpB;
    }
    return 0;
}
