// Q60: Count positive, negative, and zero elements in an array.


#include <stdio.h>

int main() {
    int n, arr[100];
    int pos = 0, neg = 0, zero = 0;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count positives, negatives, and zeros
    for(int i=0; i<n; i++) {
        if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
        else
            zero++;
    }

    
    printf("Positive=%d, Negative=%d, Zero=%d\n", pos, neg, zero);

    return 0;
}
