// Q66: Insert an element in a sorted array at the appropriate position.


#include <stdio.h>

int main() {
    int n, arr[100], x, pos;

    // Read array size and elements
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to insert
    scanf("%d", &x);

    // Find correct position for insertion
    pos = 0;
    while(pos < n && arr[pos] < x) {
        pos++;
    }

    // Shift elements to make space
    for(int i=n; i>pos; i--) {
        arr[i] = arr[i-1];
    }

    // Insert the new element
    arr[pos] = x;
    n++;

    // Print new array
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
