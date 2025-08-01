//This program calculates and compares the speed of two cyclists based on the distance they covered and the time they took

#include <stdio.h>

int main() {
    // Distance in kilometers
    float ali_km = 2;
    float haider_km = 4;

    // Time: hours and minutes
    float ali_hours = 3;
    float ali_minutes = 10;

    float haider_hours = 3;
    float haider_minutes = 20;

    // Convert distance to meters
    float ali_meters = ali_km * 1000;
    float haider_meters = haider_km * 1000;

    // Convert time to seconds
    float ali_seconds = (ali_hours * 3600) + (ali_minutes * 60);
    float haider_seconds = (haider_hours * 3600) + (haider_minutes * 60);

    // Calculate speed in meters per second
    float ali_speed = ali_meters / ali_seconds;
    float haider_speed = haider_meters / haider_seconds;

    // Print results (rounded to 3 decimal places)
    printf("Ali's speed: %.3f m/s\n", ali_speed);
    printf("Haider's speed: %.3f m/s\n", haider_speed);

    return 0;
}
