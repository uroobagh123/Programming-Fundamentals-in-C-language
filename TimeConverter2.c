
// This program converts seconds into hours, minutes, and seconds (HH:MM:SS format)

#include <stdio.h>

int main() {
    int s = 5000;
    int hours, min, sec, total;

    hours = s / 3600;           // Get hours
    total = s % 3600;           // Remaining seconds after hours
    min = total / 60;           // Get minutes
    sec = total % 60;           // Get seconds

    printf("%d hour(s), %d minute(s) and %d second(s)\n", hours, min, sec);

    return 0;
}
