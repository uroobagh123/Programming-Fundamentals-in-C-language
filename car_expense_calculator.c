// This program calculates the monthly and yearly automobile operating expenses.

#include <stdio.h>

// Function to calculate total monthly expenses
int calcMonthlyExp(int loan_payment, int insurance, int gas, int oil, int tires, int maintenance) {
    int total_monthly = loan_payment + insurance + gas + oil + tires + maintenance;
    printf("Total Monthly Expenses = %d\n", total_monthly);
    return total_monthly;
}

// Function to calculate yearly expenses by calling calcMonthlyExp()
int calcYearlyExp(int loan_payment, int insurance, int gas, int oil, int tires, int maintenance) {
    int total_monthly = calcMonthlyExp(loan_payment, insurance, gas, oil, tires, maintenance);
    int total_yearly = total_monthly * 12;
    return total_yearly;
}

int main() {
    // Monthly cost of each item
    int loan_payment = 2;
    int insurance = 3;
    int gas = 4;
    int oil = 5;
    int tires = 6;
    int maintenance = 7;

    // Calculate yearly expenses (which internally calculates monthly expenses)
    int yearly = calcYearlyExp(loan_payment, insurance, gas, oil, tires, maintenance);

    // Print the yearly expenses
    printf("Total Yearly Expenses = %d\n", yearly);

    return 0;
}
