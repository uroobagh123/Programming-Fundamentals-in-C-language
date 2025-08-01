//This program takes 15 numbers as input from the user and displays all the unique (non-repeating) elements.

#include <stdio.h>

int main() {
    int numbers[15];
    int i, j, isUnique;

    printf("Enter 15 elements in the array:\n");
    for (i = 0; i < 15; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nUnique elements are:\n");
    for (i = 0; i < 15; i++) {
        isUnique = 1;
        for (j = 0; j < 15; j++) {
            if (i != j && numbers[i] == numbers[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", numbers[i]);
        }
    }

    printf("\n");
    return 0;
}
