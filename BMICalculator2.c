 
// This program calculates the BMI (Body Mass Index) and prints the result up to 3 decimal places.

#include <stdio.h>

int main() {
    int weight = 34;        // weight in kilograms
    float height = 1.6256;  // height in meters

    float bmi = weight / (height * height);  // BMI formula: kg/m^2

    printf("BMI = %.3f\n", bmi);

    return 0;
}
