This program converts feet to inches and centimeters

#include <stdio.h>

int main() {
    int feet = 2;
    int inches;
    float cm;

    inches = feet * 12;          // Convert to inches
    cm = feet * 30.48;           // Convert to centimeters

    printf("Inches = %d", inches);
    printf("\nCentimeters = %.2f", cm);  // Print with 2 decimal precision

    return 0;
}
