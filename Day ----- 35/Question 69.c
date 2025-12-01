// Q69: Find the second largest element in an array


#include <stdio.h>

int main() {
    int n, arr[100], max, second;
    scanf("%d", &n);

    // Read array elements
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    second = -2147483648; // Minimum int value

    // Find the largest element
    for(int i=1; i<n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    // Find the second largest element
    for(int i=0; i<n; i++) {
        if(arr[i] != max && arr[i] > second)
            second = arr[i];
    }

    printf("%d\n", second);

    return 0;
}
