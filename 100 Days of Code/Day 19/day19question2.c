//Write a program to find the sum of digits of a number

#include <stdio.h>
long long llabsll(long long x) { return x < 0 ? -x : x; }
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    long long x = llabsll(n), s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    printf("%lld", s);
    return 0;
}
