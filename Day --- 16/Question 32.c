// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
	
    int num, rev = 0, rem, original;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }

    if(rev == original) {
    	
        printf("%d is a palindrome.\n", original);
    } else {
    	
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
