//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159   // Defining constant value of π

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results (formatted to 2 decimal places)
    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
