//This program prints a reverse triangle pattern of a user-defined symbol.

#include <stdio.h>

// Function prototype
void printPattern(char symbol, int rows);

// Main function
int main() {
    char ch;
    int rows;

    // Ask user for a character symbol
    printf("Enter a character symbol (e.g. *, @, ^, etc): ");
    scanf(" %c", &ch); // Note the space before %c to consume any leftover newline

    // Ask user for number of rows
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Call the function to print the pattern
    printPattern(ch, rows);

    return 0;
}

// Function definition to print the pattern
void printPattern(char symbol, int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = rows; j > i; j--) {
            printf("%c", symbol);
        }
        printf("\n");
    }
}
