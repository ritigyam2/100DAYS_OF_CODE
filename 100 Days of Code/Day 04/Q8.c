//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
 
    // Calculate sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display result
    printf("Sum = %d\n", sum);

    return 0;
}