// Q67: Insert an element in an array at a given position


#include <stdio.h>

int main() {
    int n, arr[100], pos, x;
    scanf("%d", &n);

    // Read array elements
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position and value to insert
    scanf("%d %d", &pos, &x);

    // Shift elements to right to make space
    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    arr[pos] = x; // Insert the element
    n++;

    // Print new array
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
