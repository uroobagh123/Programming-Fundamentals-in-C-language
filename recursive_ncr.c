// This program calculates the combination (nCr) using two functions: one for factorial using recursion, and another for computing nCr. The values of n and r are taken from the user in main().

#include <stdio.h>

// Recursive function to calculate factorial
int fact(int n) {
    if (n == 0)  // 0! is 1
        return 1;
    else
        return n * fact(n - 1);
}

// Function to calculate nCr using factorial function
int n_c_r(int n, int r) {
    int nCr = fact(n) / (fact(r) * fact(n - r));
    return nCr;
}

int main() {
    int n, r;

    // Taking input from user
    printf("Input n: ");
    scanf("%d", &n);
    printf("Input r: ");
    scanf("%d", &r);

    // Input validation
    if (n < 0 || r < 0) {
        printf("n and r must be non-negative integers.\n");
    } else if (n < r) {
        printf("n must be greater than or equal to r.\n");
    } else {
        // Call nCr function and display result
        printf("nCr = %d\n", n_c_r(n, r));
    }

    return 0;
}
