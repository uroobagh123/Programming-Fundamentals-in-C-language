//This program converts seconds into minutes, hours, and days

#include <stdio.h>

int main() {
    int sec = 1000000;
    int minutes, hours, days;

    minutes = sec / 60;          // 1 minute = 60 seconds
    hours = sec / 3600;          // 1 hour = 3600 seconds
    days = sec / 86400;          // 1 day = 86400 seconds

    printf("Total seconds = %d\n", sec);
    printf("Minutes = %d\n", minutes);
    printf("Hours   = %d\n", hours);
    printf("Days    = %d\n", days);

    return 0;
}
