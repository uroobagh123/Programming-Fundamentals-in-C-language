// Program to find the sum of left and right diagonals of a square matrix
#include <stdio.h>

int main() {
    int size, leftsum = 0, rightsum = 0;

    // Ask user for size of square matrix
    printf("Enter the dimension of the square matrix: ");
    scanf("%d", &size);

    int array[size][size];

    // Input matrix elements
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter value for index [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);

            // Left diagonal
            if (i == j)
                leftsum += array[i][j];

            // Right diagonal
            if ((i + j) == size - 1)
                rightsum += array[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    // Print diagonal sums
    printf("\nSum of Left Diagonal: %d\n", leftsum);
    printf("Sum of Right Diagonal: %d\n", rightsum);

    return 0;
}
