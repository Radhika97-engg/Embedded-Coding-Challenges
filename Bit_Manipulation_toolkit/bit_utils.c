#include <stdio.h>
#include "bit_utils.h"

// Count the number of 1s in the binary representation of a number using loop
int count_set_bits_loop(unsigned int number) {
    int count = 0;
    while (number > 0) 
    {
        count += number & 1;     // Add 1 if the last bit is set
        number >>= 1;            // Shift bits to right by 1
    }
    return count;
}

// This removes the rightmost 1 in each iteration
int count_set_bits_trick(unsigned int number) {
    int count = 0;
    while (number > 0) {
        number &= (number - 1);  // Drop the lowest set bit
        count++;
    }
    return count;
}

// Reverse all bits in a 32-bit unsigned integer
// Shift result left and add last bit from number
unsigned int reverse_bits(unsigned int number) {
    unsigned int reversed = 0;
    for (int i = 0; i < 32; i++) {
        reversed <<= 1;              // Make space on the right
        reversed |= (number & 1);    // Add last bit of input
        number >>= 1;                // Move input to next bit
    }
    return reversed;
}

// Print the binary representation of a number from MSB to LSB
void print_binary(unsigned int number) {
    printf("Binary representation: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (number >> i) & 1;  // Mask each bit from MSB to LSB
        printf("%d", bit);
    }
    printf("\n");
}

// Toggle a specific bit at a given position (0–31)
// XOR flips the bit at the position
unsigned int toggle_bit(unsigned int number, int position) {
    return number ^ (1 << position);
}

// Check if a number is a power of 2
// Excludes 0
int power_of_two(unsigned int number) {
    return number != 0 && (number & (number - 1)) == 0;
}

// Perform left rotation of bits in a 32-bit number
// Wraps the bits shifted out on the left back to the right
unsigned int rotate_left(unsigned int number, int position) {
    position %= 32;  // Normalize if > 32
    return (number << position) | (number >> (32 - position));
}

// Perform right rotation of bits in a 32-bit number
// Wraps the bits shifted out on the right back to the left
unsigned int rotate_right(unsigned int number, int position) {
    position %= 32;
    return (number >> position) | (number << (32 - position));
}

// Display the menu options
void show_menu() {
    printf("\n===== Bit Manipulation Toolkit =====\n");
    printf("1. Count Set Bits (Loop-Based)\n");
    printf("2. Count Set Bits (Bit Trick)\n");
    printf("3. Reverse All Bits\n");
    printf("4. Print Binary\n");
    printf("5. Toggle Nth Bit\n");
    printf("6. Check if Power of 2\n");
    printf("7. Rotate Left\n");
    printf("8. Rotate Right\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
}
