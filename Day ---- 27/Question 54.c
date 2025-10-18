// Q54: Write a program to print the following pattern:

/*	   *
	  ***
	 *****
	*******
	 *****
	  ***
	   *       */


#include <stdio.h>

int main() {
    int n = 4; // height of upper part (center row is n*2-1 stars)

    // Upper part (1, 3, 5, 7 stars)
    for(int i=1; i<=n; i++) {
        for(int s=1; s<=n-i; s++) {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower part (5, 3, 1 stars)
    for(int i=n-1; i>=1; i--) {
        for(int s=1; s<=n-i; s++) {
            printf(" ");
        }
        for(int j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
