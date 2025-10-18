// Q51: Write a program to print the following pattern:
/*	    5
	   45
	  345
	 2345
	12345   */




#include <stdio.h>

int main() {
    for(int i=1; i<=5; i++) {
        // Print leading spaces for indentation (5-i spaces)
        for(int s=1; s<=5-i; s++) {
            printf(" ");
        }
        // Print numbers starting from (6-i) up to 5
        for(int j=6-i; j<=5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next row
    }
    return 0;
}
