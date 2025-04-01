# Bit Manipulation Toolkit

A mini command-line toolkit written in C to perform various **bitwise operations** like counting set bits, reversing bits, checking power of two, toggling bits, etc. This project showcases efficient bit-level operations, often used in embedded systems and systems programming.

## Folder Structure
Bit_Manipulation_toolkit/ 
├── main.c → Entry point and menu logic
├── bit_utils.c → Bit manipulation function definitions 
├── bit_utils.h → Function declarations

## Features Implemented

- Count Set Bits (Loop & Trick method)
- Reverse Bits
- Check Power of Two
- Toggle Bit at Given Position
- Rotate Bits (Left & Right)
- Print Binary Representation

## How to Compile & Run
### Using GCC:
gcc main.c bit_utils.c -o bit_toolkit
./bit_toolkit

# Sample Output
Bit Manipulation Toolkit
1. Count Set Bits
2. Reverse Bits
3. Toggle Bit
...
Enter your choice:

# Tools & Concepts
Language: C
# Core Concepts: Bitwise operators (&, |, ^, <<, >>), loops, custom headers.
# Use Case
Perfect for embedded systems learners or anyone prepping for low-level system interviews.
Builds intuition on how bits are manipulated at the hardware level.
# License
This project is open-source and available under the MIT License.
