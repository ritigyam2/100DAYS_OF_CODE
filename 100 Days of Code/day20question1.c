#include <stdio.h>
long long llabsll(long long x) { return x < 0 ? -x : x; }
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    long long x = llabsll(n), p = 1;
    int any = 0;
    if (x == 0)
    {
        printf("0");
        return 0;
    }
    while (x > 0)
    {
        int d = x % 10;
        if (d % 2 == 1)
        {
            p *= d;
            any = 1;
        }
        x /= 10;
    }
    if (!any)
        printf("0");
    else
        printf("%lld", p);
    return 0;
}
