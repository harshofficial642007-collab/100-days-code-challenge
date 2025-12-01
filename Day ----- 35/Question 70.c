// Q70: Rotate an array to the right by k positions.


#include <stdio.h>

int main() {
    int n, arr[100], k;
    scanf("%d", &n);

    // Read array
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n; // In case k > n

    // Print rotated array directly
    for(int i=0; i<n; i++) {
        int idx = (n - k + i) % n;
        printf("%d ", arr[idx]);
    }
    printf("\n");

    return 0;
}
