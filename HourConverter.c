
// This program converts hours into minutes and seconds

#include <stdio.h>

int main() {
    int hour = 2;
    int min, secs;

    min = hour * 60;      // 1 hour = 60 minutes
    secs = hour * 3600;   // 1 hour = 3600 seconds

    printf("Hours   = %d\n", hour);
    printf("Minutes = %d\n", min);
    printf("Seconds = %d\n", secs);

    return 0;
}
