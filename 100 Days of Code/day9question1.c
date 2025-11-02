#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c;
    if (scanf("%lf%lf%lf", &a, &b, &c) != 3)
        return 0;
    if (a == 0)
    {
        printf("Not quadratic");
        return 0;
    }
    double d = b * b - 4 * a * c;
    if (d > 0)
    {
        double r1 = (-b + sqrt(d)) / (2 * a), r2 = (-b - sqrt(d)) / (2 * a);
        printf("Real and Distinct: %.2f %.2f", r1, r2);
    }
    else if (d == 0)
    {
        double r = -b / (2 * a);
        printf("Real and Equal: %.2f %.2f", r, r);
    }
    else
    {
        double real = -b / (2 * a), imag = sqrt(-d) / (2 * a);
        printf("Complex: %.2f+%.2fi %.2f-%.2fi", real, imag, real, imag);
    }
    return 0;
}
