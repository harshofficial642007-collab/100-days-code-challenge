// Q68: Delete an element from an array


#include <stdio.h>

int main() {
    int n, arr[100], pos;

    // Read array size and elements
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the position to delete (0-based position)
    scanf("%d", &pos);

    // Shift elements to left to delete element at pos
    for(int i=pos; i<n-1; i++) {
        arr[i] = arr[i+1];
    }
    n--; // Array size reduces by 1

    // Print the new array
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
