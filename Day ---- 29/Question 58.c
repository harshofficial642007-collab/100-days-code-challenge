// Q58: Find the maximum and minimum element in an array


#include <stdio.h>

int main() {
    int n, arr[100];

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min with first element
    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for(int i=1; i<n; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Update max
        }
        if(arr[i] < min) {
            min = arr[i]; // Update min
        }
    }
    
    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}
