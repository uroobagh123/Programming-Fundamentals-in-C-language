// This program converts temperature from Celsius to Fahrenheit using a function.

#include <stdio.h>

// Function to convert Celsius to Fahrenheit
void TempInC(float celsius) {
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit = %.2f°F\n", fahrenheit);
}

int main() {
    float celsius;

    // Input from user
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Call function
    TempInC(celsius);

    return 0;
}
