// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, originalNum, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;

    while(num > 0) {
        int digit = num % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
            fact = fact * i;
        sum = sum + fact;
        num = num / 10;
    }

    if(sum == originalNum)
        printf("%d is a Strong number.\n", originalNum);
    else
        printf("%d is not a Strong number.\n", originalNum);

    return 0;
}
