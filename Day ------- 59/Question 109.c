// Q109: Write a program to take an integer array arr and an integer k as inputs.
//		Print the maximum sum of all the subarrays of size k.

#include <stdio.h>
int maxSumSubarray(int* arr, int arrSize, int k) {
    int maxSum = 0;
    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }
    int currentSum = maxSum;
    for (int i = k; i < arrSize; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    return maxSum;
}
int main() {
    int n, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the subarray size k: ");
    scanf("%d", &k);
    int result = maxSumSubarray(arr, n, k);
    printf("%d\n", result);
    return 0;
}