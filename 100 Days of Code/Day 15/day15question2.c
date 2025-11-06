//Write a program to reverse a given number
#include <stdio.h>
long long llabsll(long long x) { return x < 0 ? -x : x; }
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    long long s = n < 0 ? -1 : 1, x = llabsll(n), r = 0;
    if (x == 0)
        r = 0;
    while (x > 0)
    {
        r = r * 10 + (x % 10);
        x /= 10;
    }
    printf("%lld", s * r);
    return 0;
}
