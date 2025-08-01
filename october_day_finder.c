// This program determines the day of the week in October based on the date using modulo logic.

#include <stdio.h>

int main() {
    int date;
    printf("Enter the date of October (1–31): ");
    scanf("%d", &date);

    //validate input
    if (date < 1 || date > 31) {
        printf("invalid Input\n");
        return 0;
    }

    //array of days from 1 to 7 October
    const char* days[7] = {
        "Saturday",   // 1
        "Sunday",     // 2
        "Monday",     // 3
        "Tuesday",    // 4
        "Wednesday",  // 5
        "Thursday",   // 6
        "Friday"      // 7
    };

    //calculate index using modulo
    int index = (date - 1) % 7;

    //output result
    printf("day: %s\n", days[index]);

    return 0;
}
