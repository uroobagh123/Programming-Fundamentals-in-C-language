
//This program prints a right-aligned triangle pattern using nested loops.

#include <stdio.h>

int main() {
    int i, j, rows, k, space;

    // Prompt user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    space = rows;

    // Outer loop for number of rows
    for (i = 0; i < rows; i++) {
        // Print spaces
        for (j = 0; j < space - 1; j++) {
            printf(" ");
        }

        // Decrease space count
        space--;

        // Print asterisks
        for (k = 0; k <= i; k++) {
            printf("*");
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
