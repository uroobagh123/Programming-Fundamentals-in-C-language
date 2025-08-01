//This program takes two numbers from the user and prints all prime numbers between them.

#include <stdio.h>

int main() {
    int n1, n2, i, j, isPrime;

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    printf("\nPrime numbers between %d and %d:\n", n1, n2);

    // Loop through each number between n1 and n2
    for (i = n1; i <= n2; i++) {
        if (i <= 1) continue; // Skip 0 and 1

        isPrime = 1; // Assume number is prime

        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = 0; // Not a prime
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
