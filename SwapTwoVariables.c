
// This program exchanges the values of two variables using a third variable.

#include <stdio.h>

int main() {
    int a = 1, b = 2, temp;

    // Display before swapping
    printf("Before exchanging: a = %d, b = %d\n", a, b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display after swapping
    printf("After exchanging:  a = %d, b = %d\n", a, b);

    return 0;
}
