// Q110: Write a program to take an integer array arr and an integer k as inputs.
//		The task is to find the maximum element in each subarray of size k moving from left to right.
//		Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
int maxInSubarrays(int* arr, int arrSize, int k, int* result) {
    for (int i = 0; i <= arrSize - k; i++) {
        int maxVal = arr[i];
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > maxVal) {
                maxVal = arr[i + j];
            }
        }
        result[i] = maxVal;
    }
    return arrSize - k + 1; 
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
    int result[n - k + 1];
    int resultSize = maxInSubarrays(arr, n, k, result);
    for (int i = 0; i < resultSize; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}