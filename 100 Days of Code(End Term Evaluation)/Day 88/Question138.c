//Print all enum names and integer values using a loop
#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    // Define a sentinel value for the total count (optional but helpful)
    NUM_COLORS 
};

int main() {
    // Array of strings holding the names, must match the enum order
    const char *color_names[] = {
        "RED", 
        "GREEN", 
        "BLUE"
    };

    printf("--- Enum Colors and Values ---\n");
    
    // Loop through the enum values using the sentinel (NUM_COLORS = 3)
    for (int i = RED; i < NUM_COLORS; i++) {
        // Cast the integer 'i' back to enum Color type for semantic clarity
        enum Color c = i; 
        
        printf("%s = %d\n", color_names[i], c);
    }
    
    // Output:
    // RED = 0
    // GREEN = 1
    // BLUE = 2

    return 0;
}