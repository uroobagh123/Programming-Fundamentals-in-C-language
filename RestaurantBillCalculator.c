
// Calculates tax, tip, and total bill for a restaurant meal.

#include <stdio.h>

int main() {
    float meal_price = 1200.0;                     // Original meal cost
    float tax = 4.75 / 100 * meal_price;           // Tax is 4.75% of meal cost
    float total_after_tax = meal_price + tax;      // Total after adding tax
    float tip = 10.0 / 100 * total_after_tax;      // Tip is 10% of total after tax
    float total_bill = total_after_tax + tip;      // Final total

    printf("Meal cost      = %.2f Rs\n", meal_price);
    printf("Tax amount     = %.2f Rs\n", tax);
    printf("Tip amount     = %.2f Rs\n", tip);
    printf("Total bill     = %.2f Rs\n", total_bill);

    return 0;
}
