#include <stdio.h>
long long llabsll(long long x) { return x < 0 ? -x : x; }
long long gcdll(long long a, long long b)
{
    a = llabsll(a);
    b = llabsll(b);
    while (b)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
int main()
{
    long long a, b;
    if (scanf("%lld%lld", &a, &b) != 2)
        return 0;
    printf("%lld", gcdll(a, b));
    return 0;
}
