#include <stdio.h>

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swap without using a third variable
    a = a + b;   // Step 1: add both
    b = a - b;   // Step 2: subtract new b from sum → original a
    a = a - b;   // Step 3: subtract new b from sum → original b

    // Display result
    printf("After swap: %d %d\n", a, b);

    return 0;
}