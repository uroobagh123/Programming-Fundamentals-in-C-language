//This program asks the user to enter a number and prints its multiplication table (1 to 10).

#include <stdio.h>

// Function prototype
void print_Table(int n);

int main() {
    int num;
    char choice;

    do {
        printf("Enter a number to print its multiplication table: ");
        scanf("%d", &num);

        // Call the function to print the table
        print_Table(num);

        // Ask user if they want to continue
        printf("Do you want to print another table? (Y/N): ");
        scanf(" %c", &choice);  // Notice the space before %c to consume newline

    } while (choice == 'Y' || choice == 'y');

    printf("Program ended.\n");
    return 0;
}

// Function to print multiplication table
void print_Table(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
