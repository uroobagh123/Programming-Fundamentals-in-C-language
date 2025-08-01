//This program calculates the sum of the inverse of factorials up to a number entered by the user.


#include <stdio.h>

int main() {
    int i, n;
    float sum = 0.0, fact = 1;

    // Prompt user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop to calculate each term and sum them
    for (i = 1; i <= n; i++) {
        fact = fact * i; // calculate factorial iteratively
        sum = sum + (1.0 / fact); // add inverse of factorial to sum

        // Display each term
        printf("1/%d! = %.4f\n", i, 1.0 / fact);
    }

    // Display final result
    printf("\nSum = %.4f\n", sum);

    return 0;
}
