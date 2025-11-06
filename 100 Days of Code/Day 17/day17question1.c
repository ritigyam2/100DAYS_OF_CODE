//Write a program to check if a number is an Armstrong number
#include <stdio.h>
long long ipow(long long a, int e)
{
    long long r = 1;
    while (e--)
        r *= a;
    return r;
}
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n < 0)
    {
        printf("No");
        return 0;
    }
    long long x = n;
    int d = 0;
    if (x == 0)
        d = 1;
    while (x > 0)
    {
        d++;
        x /= 10;
    }
    x = n;
    long long s = 0;
    if (n == 0)
        s = 0;
    while (x > 0)
    {
        s += ipow(x % 10, d);
        x /= 10;
    }
    if (s == n)
        printf("Yes");
    else
        printf("No");
    return 0;
}
