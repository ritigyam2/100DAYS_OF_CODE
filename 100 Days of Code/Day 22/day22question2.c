#include <stdio.h>
int main()
{
    long long n, s = 0;
    if (scanf("%lld", &n) != 1)
        return 0;
    for (long long i = 1; i <= n / 2; i++)
        if (n % i == 0)
            s += i;
    if (s == n)
        printf("Perfect");
    else
        printf("Not Perfect");
    return 0;
}
