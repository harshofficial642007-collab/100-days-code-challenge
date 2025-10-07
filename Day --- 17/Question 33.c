// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>

int main() {
    int num, original, rem, sum = 0;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }

    if(sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}
