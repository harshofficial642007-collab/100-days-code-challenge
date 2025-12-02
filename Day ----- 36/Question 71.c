// Q71: Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    // Read number of rows and columns
    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10]; // matrix with fixed max size
    
    // Read elements of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Print the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) {
                printf(" "); // print space between elements in a row
            }
        }
        printf("\n"); // new line after each row
    }
    
    return 0;
}
