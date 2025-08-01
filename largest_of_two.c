// This program reads two integers from the user and prints which one is greater using if-else.

#include <stdio.h>

int main() {
    int x, y;

    printf("Enter first integer x: ");
    scanf("%d", &x);

    printf("Enter second integer y: ");
    scanf("%d", &y);

    if (x > y) {
        printf("First integer %d is greater than second integer %d\n", x, y);
    } else if (y > x) {
        printf("Second integer %d is greater than first integer %d\n", y, x);
    } else {
        printf("Both integers are equal: %d and %d\n", x, y);
    }

    return 0;
}
