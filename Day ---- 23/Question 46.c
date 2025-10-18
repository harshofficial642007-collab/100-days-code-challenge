// Q46: Write a program to print the following pattern:
// 	*****
// 	*****
//	*****
// 	*****
//	*****

#include <stdio.h>

int main() {
    int i, j;
    for(i = 0; i < 5; i++) {         // Loop for 5 rows
        for(j = 0; j < 5; j++) {     // Loop for 5 columns in each row
            printf("*");
        }
        printf("\n");                // Move to the next line after printing 5 stars
    }
    return 0;
}
