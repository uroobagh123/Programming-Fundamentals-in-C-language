// This program calculates attendance percentage and checks if a student is allowed to sit in the exam.

#include <stdio.h>

// Function to calculate and display attendance status
void calculateAttendance(int classesAttended, int classesTotal) {
    float percentage;

    percentage = (classesAttended * 100.0) / classesTotal;

    printf("Your attendance is: %.2f%%\n", percentage);

    if (percentage >= 80) {
        printf("You are allowed to sit in the exam\n");
    } else {
        printf("You are not allowed to sit in the exam\n");
    }
}

int main() {
    int totalClasses, attendedClasses;

    // Input
    printf("Enter total classes scheduled: ");
    scanf("%d", &totalClasses);

    printf("Enter total classes attended: ");
    scanf("%d", &attendedClasses);

    // Call function
    calculateAttendance(attendedClasses, totalClasses);

    return 0;
}
