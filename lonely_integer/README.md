# Lonely Integer (Bitwise XOR Approach)

## Problem Statement
Given an array where every number appears **exactly twice** except for **one number**, find that unique number.

## Approach
We use the **XOR property**:
- `a ^ a = 0` (same numbers cancel out)
- `a ^ 0 = a` (XOR with 0 keeps the number)
- Since all numbers appear twice **except one**, XORing all elements gives the unique number.

## Implementation
```c
int find_lonely_integer(int count, int* arr) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result ^= arr[i];
    }
    return result;
}
Time Complexity : O(n) (we traverse the array once)
Space Complexity: O(1) (only one integer variable is used)

Edge Cases Considered
Smallest input [1]
All numbers except one are duplicates 
Large input (n = 100000) tested for performance

