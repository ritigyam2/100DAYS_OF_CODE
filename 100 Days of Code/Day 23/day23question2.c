//Write a program to print the following pattern: ***** ***** ***** ***** *****
#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    double s = 0;
    int num = 1, den = 2;
    for (int i = 0; i < n; i++)
    {
        s += (double)num / den;
        num += 2;
        den += 2;
    }
    printf("%.6f", s);
    return 0;
}
