#include <stdio.h>
#include <math.h>   // for pow() function

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input principal, rate, and time
    printf("Enter Principal, Rate, and Time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Calculate Compound Interest
    compoundInterest = principal * (pow((1 + rate / 100), time)) - principal;

    // Display results
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);

    return 0;
}
