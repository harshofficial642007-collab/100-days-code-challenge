// Q119: Write a program to take an integer array as input. Only one element will be repeated.
//		Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
int findDuplicate(int* nums, int numsSize) {
    int seen[100000] = {0}; 
    for (int i = 0; i < numsSize; i++) {
        if (seen[nums[i]] == 1) {
            return nums[i];
        }
        seen[nums[i]] = 1;
    }
    return -1; 
}
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int duplicate = findDuplicate(nums, n);
    printf("%d\n", duplicate);
    return 0;
}