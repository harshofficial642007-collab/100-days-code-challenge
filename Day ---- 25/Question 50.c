// Q50: Write a program to print the following pattern:
/*	*****
	 ****
	  ***
	   **
	    *  */


#include <stdio.h>

int main() {
    // Loop for each row (from 1 to 5)
    for(int i=1; i<=5; i++) {
        // Print spaces for indentation
        for(int s=1; s<i; s++) {
            printf(" ");
        }
        // Print stars
        for(int j=1; j<=6-i; j++) {
            printf("*");
        }
        printf("\n"); // Next line after each row
    }
    return 0;
}
