// Q57: Find the sum of array elements.


#include <stdio.h>

int main() {
    int n, arr[100], sum = 0;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find sum
    for(int i=0; i<n; i++) {
        sum = sum + arr[i];
    }

    // Print sum
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
