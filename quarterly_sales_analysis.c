// Program to record quarterly sales for 3 years and analyze sales data
#include <stdio.h>

int main() {
    int sales[3][4];
    int yearlyTotal, grandTotal = 0;
    int maxSales = 0, maxYear = 0, maxQuarter = 0;

    // Input sales data
    for (int i = 0; i < 3; i++) {
        printf("\nEnter sales data for Year %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("  Quarter %d: ", j + 1);
            scanf("%d", &sales[i][j]);

            // Check for max sales
            if (sales[i][j] > maxSales) {
                maxSales = sales[i][j];
                maxYear = i + 1;
                maxQuarter = j + 1;
            }
        }
    }

    // Calculate and display yearly totals
    printf("\nYearly Revenue Summary:\n");
    for (int i = 0; i < 3; i++) {
        yearlyTotal = 0;
        for (int j = 0; j < 4; j++) {
            yearlyTotal += sales[i][j];
        }
        grandTotal += yearlyTotal;
        printf("  Year %d Total Revenue: %d\n", i + 1, yearlyTotal);
    }

    // Final Output
    printf("\nTotal Sales for All 3 Years: %d\n", grandTotal);
    printf("Maximum Sales: %d (Year %d, Quarter %d)\n", maxSales, maxYear, maxQuarter);

    return 0;
}
