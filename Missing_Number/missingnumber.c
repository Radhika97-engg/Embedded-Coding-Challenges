#include<stdio.h>
#include<stdlib.h>
// Function to calculate missing number using XOR
int missingnumber(int *arr, int numsSize)
{
    int result=0; // Initialize result to store missing number
    int arr_xor=0,elements_xor=0;// // XOR accumulators for array and numbers [0, n]
    // XOR all elements in the array
    for(int i=0;i<numsSize;i++)
    {
        arr_xor^=arr[i];
        elements_xor^=i;
    }
    elements_xor^=numsSize;
    result=arr_xor^elements_xor;
    printf("the missing number is : %d", result);
    return result;
}
int main()
{
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int *arr=(int*)malloc(size*sizeof(int));
    printf("enter the elements of array");
    for(int j=0;j<size;j++)
    {
    scanf("%d", &arr[j]);
    if(arr[j]>size)
    {
        printf("Invalid input: Element must be within [0, %d].\n", size);
        j--;  // asking for input again for the same index
        continue;  // Skip to next input without breaking the loop
    }
    }
    missingnumber(arr,size);
    free(arr);

}