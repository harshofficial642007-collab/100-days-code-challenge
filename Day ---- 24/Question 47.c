/* Q47: Write a program to print the following pattern:
	*
	**
	***
	****
	*****  */
	
#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {         // Loop for each row
        for(j = 1; j <= i; j++) {     // Print i stars in the ith row
            printf("*");
        }
        printf("\n");                 // Move to the next line after each row
    }
    return 0;
}
