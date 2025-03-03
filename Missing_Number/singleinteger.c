#include <stdio.h>
#include <stdlib.h>

int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for (int i = 0; i < numsSize; i++) {
        result ^= nums[i];
    }
    return result;
}

int main() {
    int nums;
    printf("number of elements : ");
    scanf("%d", &nums);

    int *a = (int*)malloc(nums * (sizeof(int)));
    printf("enter the elements : ");
    
    for (int i = 0; i < nums; i++) {
        scanf("%d", &a[i]);
    }

    int result = singleNumber(a, nums);
    printf("the single integer is %d", result);

    free(a); // Free allocated memory
    return 0;
}
