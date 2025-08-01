//this program demonstrates variable assignment, time conversion, and BMI calculation.

#include <stdio.h> 
int main() { 
    float y = 5.5; 
    float x;
    x = y; 
    printf("\nthe value of x is: %.2f", x);


    int seconds = 5000;
    float hours = seconds / 3600.0; 
    printf("\nthere are %.2f hours in %d seconds", hours, seconds);

    float weight = 80.5; 
    float height = 3.3;  
    float BMI = weight / (height * height); 
    printf("\nBMI: %.2f", BMI); 

    return 0;
}
