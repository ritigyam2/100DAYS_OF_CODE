//(Loops without Arrays/Strings) Write a program to check if a number is a strong number
#include <stdio.h>

int main() {
    int num, originalNum, digit, factorial, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;  // Store original number for comparison

    // Loop through each digit
    while (num > 0) {
        digit = num % 10;   // Extract last digit
        num = num / 10;     // Remove last digit

        // Calculate factorial of the digit
        factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }

        // Add factorial to sum
        sum += factorial;
    }

    // Check if sum equals original number
    if (sum == originalNum) {
        printf("%d is a Strong number\n", originalNum);
    } else {
        printf("%d is Not a Strong number\n", originalNum);
    }

    return 0;
}
