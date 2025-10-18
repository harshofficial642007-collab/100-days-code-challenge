//  Q52: Write a program to print the following pattern:

/*	*

	*
	*
	*

	*
	*
	*
	*
	*

	*	
	*
	*

	*    */



#include <stdio.h>

int main() {
    // First single star
    printf("*\n\n");

    // Block of 3 stars
    for(int i=0; i<3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Block of 5 stars
    for(int i=0; i<5; i++) {
        printf("*\n");
    }
    printf("\n");

    // Block of 3 stars
    for(int i=0; i<3; i++) {
        printf("*\n");
    }
    printf("\n");

    // Last single star
    printf("*\n");

    return 0;
}
