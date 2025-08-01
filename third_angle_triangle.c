// This program calculates the third angle of a triangle given two angles.

#include <stdio.h>

// Function to calculate the third angle
int ThirdAngleOfTriangle(int a, int b) {
    int c = 180 - (a + b);
    return c;
}

int main() {
    int a = 10;
    int b = 20;

    // Call the function and store the result
    int thirdAngle = ThirdAngleOfTriangle(a, b);

    // Print the third angle in main
    printf("Third angle of the triangle = %d°\n", thirdAngle);

    return 0;
}
