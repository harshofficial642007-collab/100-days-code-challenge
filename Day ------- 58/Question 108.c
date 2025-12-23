// Q108: Write a Program to take an integer array nums.
//		Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
//		The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
void productExceptSelf(int* nums, int numsSize, int* result) {
    for (int i = 0; i < numsSize; i++) {
        result[i] = 1; 
        for (int j = 0; j < numsSize; j++) {
            if (i != j) {
                result[i] *= nums[j];
            }
        }
    }
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int result[n];
    productExceptSelf(nums, n, result);
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", result[i]);
    }
    printf("]\n");
    return 0;
}