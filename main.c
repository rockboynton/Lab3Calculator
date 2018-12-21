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
#include "lcd.h"
#include "keypad.h"
#include "delay.h"

#define F_CPU 16000000UL

#define DEBUG 1


// main
int main(){

	// Initialize variables to be used 
	static char TEMPLATE[] = "_ + _ = __";
	uint8_t numChars;
	static const uint8_t aIndex = 0;
	static const uint8_t opIndex = 2;
	static const uint8_t bIndex = 4;
	static const uint8_t resIndex = 8;

	uint8_t result[2];
	

	// Initialize hardware
	init_usart2(19200,F_CPU);
	led_init();
	lcd_init();
	key_init();

	// --------------------- LCD TEST CODE ----------------------
	if (DEBUG) {
		delay_1ms(1000);
		numChars = lcd_print_string(TEMPLATE);
			delay_1ms(1000);
		lcd_home();
			delay_1ms(1000);
		lcd_write_data(key_getChar());
			delay_1ms(1000);
		lcd_set_position(0,2);
			delay_1ms(1000);
		lcd_write_data(key_getChar());
			delay_1ms(1000);
		lcd_set_position(0,4);
			delay_1ms(1000);
		lcd_write_data(key_getChar());
			delay_1ms(1000);
		lcd_set_position(0,8);
				delay_1ms(1000);
		sprintf(result, "%d", 4);
		lcd_print_string(result);
			delay_1ms(1000);
		// while (1) {
		// 	lcd_write_data(key_getChar());
		// }
	}
	// -------------------------------------------------------------



	// Never return
	while (1) {
		 
	}

	// Never returns
	return 0;
}



