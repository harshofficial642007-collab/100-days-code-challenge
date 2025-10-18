// Q49: Write a program to print the following pattern:
/*	5
	45
	345
	2345
	12345  */
	
#include <stdio.h>

int main() {
    // Loop for each row from 1 to 5
    for(int i=1; i<=5; i++) {
        // For each row, start from value 6-i up to 5
        for(int j=6-i; j<=5; j++) {
            printf("%d", j); // Print the number
        }
        printf("\n"); // Next line after each row
    }
    return 0;
}
