// Q39: Write a program to find the product of odd digits of a number.


#include <stdio.h>

int main() {
	
    int num, digit;
    int product = 1;
    int hasOdd = 0; // Flag to check if there is any odd digit

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
    	
        digit = num % 10;
        
        if (digit % 2 != 0) { // Check if the digit is odd
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd){
    	
    	printf("Product of odd digits is %d\n", product);
	}else{
		
		printf("No odd digits found in the number.\n");
	}
    return 0;
}
