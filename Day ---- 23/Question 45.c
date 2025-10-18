// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n, i, num, den;
    float sum = 0.0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    num = 2;      // numerator starts from 2
    den = 3;      // denominator starts from 3
    for(i = 1; i <= n; i++) {
        sum += (float)num / den;    // add each fraction to sum
        num += 2;                   // next numerator (+2 each time)
        den += 4;                   // next denominator (+4 each time)
    }

    printf("Sum of the series up to %d terms: %.4f\n", n, sum);
    return 0;
}
