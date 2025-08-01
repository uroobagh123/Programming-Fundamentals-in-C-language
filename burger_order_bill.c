// This program asks the user if they want to buy a burger and an optional add-on, then calculates the total bill with input validation.
#include <stdio.h>

int main() {
    char x, y;
    int total = 0;

    printf("Do you want a burger? Burger price is Rs. 500.\nEnter y/n: ");
    scanf(" %c", &x);  // Added space before %c to ignore newline

    if (x == 'y' || x == 'Y') {
        total = 500;
        printf("Burger added.\n");
        printf("Do you want fries and a cold drink as an add-on for Rs. 200?\nEnter y/n: ");
        scanf(" %c", &y);  // Again, space to ignore any leftover newline

        if (y == 'y' || y == 'Y') {
            total += 200;
            printf("Add-on added.\n");
            printf("Your bill is: Rs. %d\n", total);
        } else if (y == 'n' || y == 'N') {
            printf("Your choice. Thank you.\n");
            printf("Your bill is: Rs. %d\n", total);
        } else {
            printf("Invalid Input.\n");
        }
    } else if (x == 'n' || x == 'N') {
        printf("No problem. See you next time!\n");
    } else {
        printf("Invalid Input.\n");
    }

    return 0;
}
