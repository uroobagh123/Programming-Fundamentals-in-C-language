//Description: Takes marks of 10 students and calculates the maximum, minimum, and average marks.


#include <stdio.h>

int main() {
    int i, marks[10], sum = 0, max, min;
    float avg;

    printf("Enter marks of 10 students:\n");

    // Input marks
    for (i = 0; i < 10; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Initialize max and min with the first element
    max = marks[0];
    min = marks[0];

    // Find max, min, and calculate sum
    for (i = 0; i < 10; i++) {
        if (marks[i] > max)
            max = marks[i];

        if (marks[i] < min)
            min = marks[i];

        sum += marks[i];
    }

    // Calculate average
    avg = sum / 10.0;

    // Display results
    printf("\nMaximum Marks: %d", max);
    printf("\nMinimum Marks: %d", min);
    printf("\nAverage Marks: %.2f\n", avg);

    return 0;
}
