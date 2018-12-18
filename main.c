/*
 * main.c
 *
 *  Program to implement a basic 4 function calculator on the MSOE dev board LCD display
 * 	The display takes the form:  [_ op _ = __]  where each "_" is a single decimal digit and the op *  can be +, -, x, or /.
 *  - A, B, C, and D keys on the keypad are be used to specify addition, 
 *  subtraction, multiplication and division respectively.  
 *  - # performs a calculation and * moves the cursor to the first operand and 
 *  clears result.
 *  - Digits are specified from left to right jumping back and forth between the two 
 *  possible numbers to be operated on.
 *  Division results are rounded to the integer. 
 *  Prints an error message to the LCD upon a division by zero.

 */
#include <stdio.h>
#include <stdlib.h>
#include "uart_driver.h"
#include "led.h"

#define F_CPU 16000000UL


// main
int main(){

	// Initialize variables to be used 
	

	// Initialize hardware
	init_usart2(19200,F_CPU);
	led_init();
	
	
	// Never return 
	while (1) {
		
	}

	// Never returns
	return 0;
}



