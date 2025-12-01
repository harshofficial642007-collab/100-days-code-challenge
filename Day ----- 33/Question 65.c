// Q65: Search in a sorted array using binary search


#include <stdio.h>

int main() {
    int n, arr[100], x;
    int low, high, mid, found = -1;

    // Read array size and elements
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read the element to search for
    scanf("%d", &x);

    // Initialize binary search variables
    low = 0;
    high = n - 1;

    // Binary search loop
    while(low <= high) {
        mid = (low + high) / 2;
        if(arr[mid] == x) {
            found = mid;
            break;
        } else if(arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Print result
    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("-1\n");

    return 0;
}
