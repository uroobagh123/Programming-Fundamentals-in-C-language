 
// This program reverses a three-digit integer using modulus and division operators.

#include <stdio.h>

int main() {
    int num = 789;

    // Extract digits
    int last_digit = num % 10;           // 9
    int middle_digit = (num / 10) % 10;  // 8
    int first_digit = num / 100;         // 7

    // Rearrange digits to form the reversed number
    int reversed = (last_digit * 100) + (middle_digit * 10) + first_digit;

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}
