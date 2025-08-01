// This program reads an integer from the user and determines whether it is even or odd using if-else.

#include <stdio.h>

int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is an even number\n", a);
    } else {
        printf("%d is an odd number\n", a);
    }

    return 0;
}
