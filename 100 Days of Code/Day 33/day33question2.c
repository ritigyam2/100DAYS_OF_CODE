#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n < 0)
        n = -n;
    if (n == 0)
    {
        printf("0");
        return 0;
    }
    int f[10] = {0};
    while (n)
    {
        f[n % 10]++;
        n /= 10;
    }
    int d = 0;
    for (int i = 1; i < 10; i++)
        if (f[i] > f[d])
            d = i;
    printf("%d", d);
    return 0;
}
