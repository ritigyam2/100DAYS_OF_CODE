//Q1 (User Inputs, Operations & Output) Write a program to input two numbers and display their sum.
#include <stdio.h>
int main() {
    int a, b, sum;

    // Taking input
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Calculating sum
    sum = a + b;

    // Displaying result
    printf("Sum = %d\n", sum);

    return 0;
}
