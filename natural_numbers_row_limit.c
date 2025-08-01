
//This program prints the first 50 natural numbers and limits the number of elements per row based on user input.

#include <stdio.h>

int main() {
    int rowLimit;

    // Ask user how many numbers should appear in each row
    printf("This program will print the first 50 natural numbers.");
    printf("\nHow many elements in a row? ");
    scanf("%d", &rowLimit);

    int count = 0;

    // Print numbers from 1 to 50
    for (int i = 1; i <= 50; i++) {
        printf("%3d ", i); // aligned output with padding
        count++;

        // Move to new line after 'rowLimit' numbers
        if (count == rowLimit) {
            printf("\n");
            count = 0; // reset counter for new row
        }
    }

    printf("\n");
    return 0;
}
