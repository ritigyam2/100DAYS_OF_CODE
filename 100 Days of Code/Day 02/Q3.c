#include <stdio.h>

int main() {
    int length, breadth;

    // Input length and breadth
    printf("Enter length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);

    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);

    // Display results
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);

    return 0;
}
