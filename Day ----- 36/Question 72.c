// Q72: Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int sum = 0; // Variable to store sum of elements
    
    // Read the number of rows and columns
    scanf("%d %d", &rows, &cols);
    
    int matrix[10][10]; // Fixed size matrix for simplicity
    
    // Read matrix elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // Add element to sum
        }
    }
    
    // Print the sum of all elements
    printf("%d\n", sum);
    
    return 0;
}
