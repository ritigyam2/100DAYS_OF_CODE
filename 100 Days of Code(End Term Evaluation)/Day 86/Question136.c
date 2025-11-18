//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch case.
#include <stdio.h>

enum Operation {
    ADD = 1, // Start from 1 for cleaner menu presentation
    SUBTRACT,
    MULTIPLY
};

int main() {
    int a = 10;
    int b = 5;
    int result;
    enum Operation choice = MULTIPLY; // Example choice

    printf("Numbers: a=%d, b=%d\n", a, b);

    switch (choice) {
        case ADD:
            result = a + b;
            printf("ADD (%d + %d) = %d\n", a, b, result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("SUBTRACT (%d - %d) = %d\n", a, b, result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("MULTIPLY (%d * %d) = %d\n", a, b, result);
            break;
        default:
            printf("Invalid operation choice.\n");
    }
    
    // Output for the example: MULTIPLY (10 * 5) = 50

    return 0;
}