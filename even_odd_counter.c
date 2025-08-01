// Takes 10 numbers from user and displays all even and odd numbers along with their count.

#include <stdio.h>

int main() {
    int values[10], even = 0, odd = 0;

    printf("Enter 10 values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    printf("\nEven numbers in the array:\n");
    for (int i = 0; i < 10; i++) {
        if (values[i] % 2 == 0) {
            printf("%d ", values[i]);
            even++;
        }
    }

    printf("\n\nOdd numbers in the array:\n");
    for (int i = 0; i < 10; i++) {
        if (values[i] % 2 != 0) {
            printf("%d ", values[i]);
            odd++;
        }
    }

    // Summary
    printf("\n\nTotal even numbers = %d", even);
    printf("\nTotal odd numbers = %d\n", odd);

    return 0;
}
