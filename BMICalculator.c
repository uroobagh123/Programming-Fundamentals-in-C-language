// This program calculates and displays the Body Mass Index (BMI)

#include <stdio.h>

int main() {
    int weight = 34;              // weight in kilograms
    float height = 1.6256;        // height in meters

    float bmi = weight / (height * height);  // BMI formula

    printf("BMI = %.2f", bmi);   // print BMI up to 2 decimal places
    return 0;
}
