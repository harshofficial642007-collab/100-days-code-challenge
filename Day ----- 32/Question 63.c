// Q63: Merge two arrays.


#include <stdio.h>

int main() {
    int n1, n2, arr1[100], arr2[100];

    // Read first array
    scanf("%d", &n1);
    for(int i=0; i<n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Read second array
    scanf("%d", &n2);
    for(int i=0; i<n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Print merged array
    for(int i=0; i<n1; i++) {
        printf("%d ", arr1[i]);
    }
    for(int i=0; i<n2; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}
