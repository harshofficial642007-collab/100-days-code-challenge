// Q61: Search for an element in an array using linear search.


#include <stdio.h>

int main() {
    int n, arr[100], x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search
    scanf("%d", &x);

    // Search for element
    int found = -1;
    for(int i=0; i<n; i++) {
        if(arr[i] == x) {
            found = i;
            break;
        }
    }

    // Print result
    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
