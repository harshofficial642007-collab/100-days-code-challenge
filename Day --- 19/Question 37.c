// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

// Function to find GCD (HCF) using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = gcd(num1, num2);

    // LCM formula: (num1 * num2) / HCF
    lcm = (num1 / hcf) * num2;

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
