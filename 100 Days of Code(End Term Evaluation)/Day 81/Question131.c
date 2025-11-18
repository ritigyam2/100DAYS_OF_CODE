#include <stdio.h> 
// Define the enumeration for the days of the week
enum Day {
    SUNDAY,    // Automatically assigned 0
    MONDAY,    // Automatically assigned 1
    TUESDAY,   // Automatically assigned 2
    WEDNESDAY, // Automatically assigned 3
    THURSDAY,  // Automatically assigned 4
    FRIDAY,    // Automatically assigned 5
    SATURDAY   // Automatically assigned 6
};

int main() {
    // Print each day and its corresponding integer value
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);

    return 0;
}