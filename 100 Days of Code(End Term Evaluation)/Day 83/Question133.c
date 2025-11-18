//enum for months and print how many days each month has
#include <stdio.h>

enum Month {
    JANUARY = 1, // Start from 1 for common month representation
    FEBRUARY,    // 2
    MARCH,       // 3
    APRIL,       // 4
    MAY,         // 5
    JUNE,        // 6
    JULY,        // 7
    AUGUST,      // 8
    SEPTEMBER,   // 9
    OCTOBER,     // 10
    NOVEMBER,    // 11
    DECEMBER     // 12
};

// Function to print the number of days for a given month
void print_days(enum Month month) {
    printf("Month %d: ", month);
    switch (month) {
        case FEBRUARY:
            printf("28/29 days\n");
            break;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days\n");
            break;
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days\n");
            break;
    }
}

int main() {
    // Print days for a few months
    print_days(JANUARY);
    print_days(APRIL);
    print_days(FEBRUARY);
    
    // Example output:
    // Month 1: 31 days
    // Month 4: 30 days
    // Month 2: 28/29 days

    return 0;
}