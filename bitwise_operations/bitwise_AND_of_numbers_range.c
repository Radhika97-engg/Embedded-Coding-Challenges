#include <stdio.h>
#include <stdlib.h>
// Function to find bitwise AND of a range
int rangeBitwiseAnd(int left, int right)
{
    int shift = 0;  // To count right shifts

    // Shift right until left and right are equal
    while (left != right)
    {
        left = left >> 1;   // Shift right by 1
        right = right >> 1; // Shift right by 1
        shift++;            // Count shifts
    }

    // Shift left back to restore original positions
    return left << shift;
}
int main()
{
    int left, right;
    
    // Taking user input for 'left' and 'right'
    printf("Enter the left boundary: ");
    scanf("%d", &left);    // Read an integer for 'left'

    printf("Enter the right boundary: ");
    scanf("%d", &right);   // Read an integer for 'right'

    int result = rangeBitwiseAnd(left, right);
    printf("Bitwise AND of range [%d, %d] is: %d\n", left, right, result);

    return 0;
}
