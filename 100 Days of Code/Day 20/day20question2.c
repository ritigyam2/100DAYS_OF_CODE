//Write a program to find the 1’s complement of a binary number and print it

#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n == 0)
    {
        printf("1");
        return 0;
    }
    if (n < 0)
    {
        printf("Invalid");
        return 0;
    }
    long long x = n, comp_rev = 0;
    int ok = 1;
    while (x > 0)
    {
        int d = x % 10;
        if (d != 0 && d != 1)
        {
            ok = 0;
            break;
        }
        comp_rev = comp_rev * 10 + (d ? 0 : 1);
        x /= 10;
    }
    if (!ok)
    {
        printf("Invalid");
        return 0;
    }
    long long comp = 0;
    while (comp_rev > 0)
    {
        comp = comp * 10 + (comp_rev % 10);
        comp_rev /= 10;
    }
    printf("%lld", comp);
    return 0;
}
