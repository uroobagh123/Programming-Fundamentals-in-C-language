// This program reads the ages of three people and determines who is the eldest using a separate function.

#include <stdio.h>

// Function to determine and print who is the eldest
void find_eldest(int amir, int ali, int haider) {
    if (amir > ali && amir > haider) {
        printf("\nEldest: Amir\n");
    } else if (ali > amir && ali > haider) {
        printf("\nEldest: Ali\n");
    } else if (haider > amir && haider > ali) {
        printf("\nEldest: Haider\n");
    } else {
        printf("\nThere is a tie among the eldest.\n");
    }
}

int main() {
    int amir, ali, haider;

    // Get input
    printf("Enter the age of Amir: ");
    scanf("%d", &amir);

    printf("Enter the age of Ali: ");
    scanf("%d", &ali);

    printf("Enter the age of Haider: ");
    scanf("%d", &haider);

    // Call the function
    find_eldest(amir, ali, haider);

    return 0;
}
