// This program prints a reverse number triangle pattern using nested loops.


#include <stdio.h>

int main() {
    int rows, i, j;

    // Prompt user to enter number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Outer loop for rows
    for (i = rows; i >= 1; i--) {
        // Inner loop to print decreasing numbers in each row
        for (j = i; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
