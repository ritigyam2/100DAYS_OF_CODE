//Show that enums store integers by printing assigned values
#include <stdio.h>

enum Status {
    START = 100,
    END
};

int main() {
    enum Status current_status = START;
    
    printf("Enum variable 'current_status' stores an integer value:\n");
    
    // Print the enum value using %d
    printf("Value of START: %d\n", START);
    printf("Value of current_status: %d\n", current_status);
    
    // Show that you can perform integer arithmetic
    int next_value = current_status + 1;
    printf("START + 1 is: %d\n", next_value);
    printf("Value of END: %d\n", END); // END is 101
    
    // Output:
    // Value of START: 100
    // Value of current_status: 100
    // START + 1 is: 101
    // Value of END: 101

    return 0;
}