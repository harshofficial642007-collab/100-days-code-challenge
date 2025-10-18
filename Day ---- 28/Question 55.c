// Q55: Write a program to print all the prime numbers from 1 to n.


#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d:\n", n);

    for(int i=2; i<=n; i++) {
        int isPrime = 1; // Assume i is prime
        for(int j=2; j<i; j++) { // Check all numbers before i
            if(i % j == 0) {
                isPrime = 0; // Not prime
                break;
            }
        }
        if(isPrime)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
