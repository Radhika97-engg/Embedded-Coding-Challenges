// bit_utils.h
// Header for Bit Manipulation Toolkit
// Author: Radhika | Clean, reusable declarations for toolkit functions

#ifndef BIT_UTILS_H
#define BIT_UTILS_H

// Function Declarations (Prototypes)
int count_set_bits_loop(unsigned int number);
int count_set_bits_trick(unsigned int number);
unsigned int reverse_bits(unsigned int number);
void print_binary(unsigned int number);
unsigned int toggle_bit(unsigned int number, int position);
int power_of_two(unsigned int number);
unsigned int rotate_left(unsigned int number, int position);
unsigned int rotate_right(unsigned int number, int position);
void show_menu(void);

#endif
