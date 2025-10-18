// Q56: Read and print elements of a one-dimensional array


#include <stdio.h>

int main() {
    int n, arr[100]; // n = size, arr[] = array to store elements

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements from user
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]); // Store each input in array
    }

    // Print array elements
    printf("Array elements:\n");
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]); // Print each element separated by space
    }
    printf("\n"); // Add newline after printing all elements

    return 0; 
}
