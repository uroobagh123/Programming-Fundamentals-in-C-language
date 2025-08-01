// This program calculates monthly and yearly automobile expenses, and also computes the number of slices in a 50cm diameter pizza based on the area of a single slice (14.125 cm²).

#include <stdio.h>

// Function to calculate monthly expenses
int calcMonthlyExp(int u, int v, int w, int x, int y, int z) {
    int total_m = u + v + w + x + y + z;
    printf("Total Monthly Expenses = %d\n", total_m);
    return total_m;
}

// Function to calculate yearly expenses from monthly total
int calcYearlyExp(int total_m) {
    int total_y = total_m * 12;
    return total_y;
}

// Function to calculate number of pizza slices
float pizzaSlices() {
    int diameter = 50;
    int radius = diameter / 2;
    float total_area = 3.14 * radius * radius;
    float pizza_slices = total_area / 14.125;  // Area per slice
    return pizza_slices;
}

int main() {
    // Automobile expenses
    int loan_payment = 2;
    int insurance = 3;
    int gas = 4;
    int oil = 5;
    int tires = 6;
    int maintenance = 7;

    int monthly = calcMonthlyExp(loan_payment, insurance, gas, oil, tires, maintenance);
    int yearly = calcYearlyExp(monthly);
    printf("Total Yearly Expenses = %d\n", yearly);

    // Pizza slice calculation
    float slices = pizzaSlices();
    printf("Number of pizza slices from a 50cm pizza = %.2f\n", slices);

    return 0;
}
