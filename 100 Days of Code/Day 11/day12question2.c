#include <stdio.h>
int main()
{
    int u;
    if (scanf("%d", &u) != 1)
        return 0;
    if (u < 0)
    {
        printf("Invalid");
        return 0;
    }
    long long bill = 0;
    int x = u;
    int t = x > 100 ? 100 : x;
    bill += (long long)t * 5;
    x -= t;
    if (x > 0)
    {
        t = x > 100 ? 100 : x;
        bill += (long long)t * 7;
        x -= t;
    }
    if (x > 0)
    {
        t = x > 100 ? 100 : x;
        bill += (long long)t * 10;
        x -= t;
    }
    if (x > 0)
    {
        bill += (long long)x * 12;
    }
    printf("%lld", bill);
    return 0;
}
