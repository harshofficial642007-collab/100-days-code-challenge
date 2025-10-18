// Q59: Count even and odd numbers in an array.


#include <stdio.h>

int main() {
    int n, arr[100], even = 0, odd = 0;

    // Read number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Read array elements
    printf("Enter %d elements:\n", n);
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Count even and odd elements
    for(int i=0; i<n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    
    printf("Even=%d, Odd=%d\n", even, odd);

    return 0;
}
