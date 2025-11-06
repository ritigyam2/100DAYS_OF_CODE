#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    unsigned long long p = 1;
    int any = 0;
    for (long long i = 2; i <= n; i += 2)
    {
        p *= i;
        any = 1;
    }
    if (!any)
        p = 1;
    printf("%llu", p);
    return 0;
}
