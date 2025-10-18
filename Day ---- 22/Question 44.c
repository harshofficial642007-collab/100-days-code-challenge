// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i, numerator, denominator;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    numerator = 1;
    denominator = 1;
    for(i = 1; i <= n; i++) {
        if(i == 1) {
            sum = sum + numerator; // first term is just 1
        } else {
            numerator = numerator + 2;   // next odd number
            denominator = denominator + 2; // next even number
            sum = sum + ((float)numerator / denominator);
        }
    }

    printf("Sum of the series up to %d terms: %.2f\n", n, sum);
    return 0;
}
