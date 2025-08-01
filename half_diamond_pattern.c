// Takes an integer from user and prints a half diamond pattern using nested loops. The number indicates the row after which the pattern starts to invert.

#include <stdio.h>

int main() {
    int i, j, rows;

    // Ask the user to input the number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Top half of the diamond (increasing part)
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the diamond (decreasing part)
    for (i = rows - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
