
// This program calculates the electricity units consumed in October and the total bill based on previous and current meter readings. 

#include <stdio.h>

int main () {
    int prev_units = 300;          // Previous cumulative units (September & earlier)
    int curr_units = 400;          // Current cumulative units (October & earlier)
    int unit_price = 5;            // Cost per unit in Rs

    int oct_units = curr_units - prev_units;             // Units consumed in October
    int oct_bill = oct_units * unit_price;               // Total bill for October

    printf("Units consumed in October = %d\n", oct_units);
    printf("Total bill for October     = %d Rs\n", oct_bill);

    return 0;
}
