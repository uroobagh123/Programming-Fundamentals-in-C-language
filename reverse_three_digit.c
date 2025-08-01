// This program reverses a 3-digit number using a function.

#include <stdio.h>

// Function to reverse a 3-digit number
int ReverseOfThreeDigitNumber(int number) {
    int units = number % 10;          // Get last digit
    int tens = (number / 10) % 10;    // Get middle digit
    int hundreds = number / 100;      // Get first digit

    // Rearranging digits to reverse the number
    int reversed = (units * 100) + (tens * 10) + hundreds;

    // Print reversed number
    printf("Reversed number = %d\n", reversed);
    
    return reversed;
}

int main() {
    int number = 789;
    ReverseOfThreeDigitNumber(number);
    return 0;
}
