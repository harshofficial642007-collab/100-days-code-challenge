// Q118: Write a program to take an input array of size n.
//		The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>
int findMissingNumber(int* nums, int numsSize) {
    int totalSum = (numsSize * (numsSize + 1)) / 2; 
    int arraySum = 0;
    for (int i = 0; i < numsSize; i++) {
        arraySum += nums[i];
    }
    return totalSum - arraySum;
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
    int missingNumber = findMissingNumber(nums, n);
    printf("%d\n", missingNumber);
    return 0;
}