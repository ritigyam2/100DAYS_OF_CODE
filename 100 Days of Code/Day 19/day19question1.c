//Write a program to find the LCM of two numbers

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
    if (a == 0 || b == 0)
    {
        printf("0");
        return 0;
    }
    long long g = gcdll(a, b);
    long long l = llabsll(a / g * b);
    printf("%lld", l);
    return 0;
}
