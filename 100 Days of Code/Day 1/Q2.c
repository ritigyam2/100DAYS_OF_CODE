#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform operations
    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    // Handle division carefully
    if (b != 0) {
        printf("Quotient = %d\n", a / b);
    } else {
        printf("Quotient = Undefined (division by zero not allowed)\n");
    }

    return 0;
}
