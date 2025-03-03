# Missing Number Finder in C

This program finds the missing number in an array of distinct numbers in the range [0, n].

## How It Works
- Uses XOR to find the missing number efficiently.
- Takes user input for array size and elements.
- Validates input to ensure elements are within range.

## Example Run
Enter the size of the array: 4
Enter the elements of the array: 0 1 3
The missing number is: 2
## Key Concepts Covered
- Bitwise Operations (XOR)
- Dynamic Memory Allocation (`malloc` and `free`)
- Input Validation

## How to Compile and Run

gcc missingnumber.c -o missingnumber
./missingnumber