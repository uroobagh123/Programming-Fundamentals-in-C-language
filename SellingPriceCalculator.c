
// This program calculates and displays the selling price of a circuit board with 20% profit.

#include <stdio.h>

int main() {
    float original_price = 200;
    float profit = (20.0 / 100) * original_price;  // 20% of original price
    float selling_price = original_price + profit;

    printf("Original Price = %.2f Rs\n", original_price);
    printf("Selling Price  = %.2f Rs\n", selling_price);

    return 0;
}
