//enum with SUCCESS, FAILURE, and TIMEOUT, and print messages
#include <stdio.h>

enum StatusCode {
    SUCCESS, // 0
    FAILURE, // 1
    TIMEOUT  // 2
};

int main() {
    enum StatusCode result = FAILURE; // Example: set the result

    printf("Operation Status: ");
    
    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed due to an error.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out, please retry.\n");
            break;
        default:
            printf("Unknown status code.\n");
    }
    
    // Output for the example: Operation Status: Operation failed due to an error.

    return 0;
}