#include <stdio.h>
long long llabsll(long long x) { return x < 0 ? -x : x; }
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    long long s = n < 0 ? -1 : 1, x = llabsll(n);
    if (x < 10)
    {
        printf("%lld", n);
        return 0;
    }
    long long last = x % 10;
    long long first = x;
    long long pow10 = 1;
    while (first >= 10)
    {
        first /= 10;
        pow10 *= 10;
    }
    long long middle = (x % pow10) / 10;
    long long res = last * pow10 + middle * 10 + first;
    printf("%lld", s * res);
    return 0;
}
