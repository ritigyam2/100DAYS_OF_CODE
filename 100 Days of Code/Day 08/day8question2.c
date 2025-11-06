//Write a program to input three numbers and find the largest among them using if–else
#include <stdio.h>
int main()
{
    double a, b, c;
    if (scanf("%lf%lf%lf", &a, &b, &c) != 3)
        return 0;
    double m = a;
    if (b > m)
        m = b;
    if (c > m)
        m = c;
    printf("%.2f", m);
    return 0;
}
