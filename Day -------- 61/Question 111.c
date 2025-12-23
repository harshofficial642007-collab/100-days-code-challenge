// Q111: Write a program to take an integer array arr and an integer k as inputs.
//		The task is to find the first negative integer in each subarray of size k moving from left to right.
//		If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>
void firstNegativeInSubarrays(int* arr, int arrSize, int k, int* result) {
    for (int i = 0; i <= arrSize - k; i++) {
        result[i] = 0; 
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                result[i] = arr[i + j];
                break; 
            }
        }
    }
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
    int resultSize = n - k + 1;
    firstNegativeInSubarrays(arr, n, k, result);
    for (int i = 0; i < resultSize; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}