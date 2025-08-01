// This program calculates shipping charges based on the weight of a package and distance to be traveled.

#include <stdio.h>

int main() {
    float weightofthepackage;
    float distancetobetravelled;

    // Get weight input
    printf("Input weight of the package in kg: ");
    scanf("%f", &weightofthepackage);

    // Validate weight
    if (weightofthepackage <= 0 || weightofthepackage > 20) {
        printf("Sorry, weight can't be zero, negative, or more than 20 kg.\n");
        return 0;
    }

    // Get distance input
    printf("Input distance to ship in miles: ");
    scanf("%f", &distancetobetravelled);

    // Validate distance
    if (distancetobetravelled < 10 || distancetobetravelled > 3000) {
        printf("Sorry, TCS does not ship to such distances.\n");
        return 0;
    }

    // Calculate charge
    float rate;

    if (weightofthepackage <= 2)
        rate = 1.10;
    else if (weightofthepackage <= 6)
        rate = 2.20;
    else if (weightofthepackage <= 10)
        rate = 3.70;
    else
        rate = 4.80;

    // Charges are based per 500 miles (partial segments count as full)
    float segments = distancetobetravelled / 500.0;
    if ((int)distancetobetravelled % 500 != 0) {
        segments = (int)(distancetobetravelled / 500) + 1; // round up
    }

    float price = segments * rate;

    printf("Total charges: Rs. %.2f\n", price);

    return 0;
}
