/*
 * lcd.h 
 * 
 * API for interfacing with the MSOE dev board LCD display
 */

//Include Guards 
#ifndef LCD_H_
#define LCD_H_

#include <inttypes.h>


/**
 * Initializes I/O to interface to communicate with LCD module.
 * Clears and homes the display.
 */ 
void lcd_init();

/**
 * Clears the display.
 * Includes necessary delay.
 */
void lcd_clear();

/**
 * Moves cursor to the home position.
 * Includes necessary delay.
 */ 
void lcd_home();

/**
 * Moves cursor to the position indicated. 
 * 
 * @param row 
 *      zero-based row of desired position
 * @param col 
 *      zero-based column of desired position 
 * Includes necessary delay  
 */ 
void lcd_set_position(uint8_t row, uint8_t col);

/**
 * Prints a null terminated string to the display.
 * Accepts the pointer to a null-terminated string, returns the number of characters written to 
 * the display.
 * 
 * @param str_ptr 
 *      pointer to a null-terminated string
 * @return 
 *      number of characters written to the display
 */ 
uint32_t lcd_print_string(uint32_t str_ptr);

/**
 * Prints a (decimal) number to the display. 
 * Accepts the number to be printed, returns the number of characters written to the display.
 * 
 * @param num 
 *      number to be printed 
 * @return uint32_t 
 *      number of characters written to the display
 */
uint32_t lcd_print_num(uint32_t num);

#endif
