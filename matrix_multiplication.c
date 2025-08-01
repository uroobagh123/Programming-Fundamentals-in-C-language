// Program to perform matrix multiplication
#include <stdio.h>
#include <stdlib.h>

// Define dimensions
#define R1 2 
#define C1 2 
#define R2 2 
#define C2 2

// Function to multiply two matrices
void multiply_matrices(int matrix1[][C1], int matrix2[][C2]) {
    int result[R1][C2];

    printf("Multiplication of the two matrices:\n\n");

    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;

            for (int k = 0; k < C1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }

            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[R1][C1] = {
        {4, 2},
        {8, 5}
    };

    int matrix2[R2][C2] = {
        {8, 4},
        {5, 2}
    };

    // Check if matrix multiplication is possible
    if (C1 != R2) {
        printf("Matrix multiplication not possible: Columns of Matrix 1 ≠ Rows of Matrix 2.\n");
        exit(EXIT_FAILURE);
    }

    multiply_matrices(matrix1, matrix2);
    return 0;
}
