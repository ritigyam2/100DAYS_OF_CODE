#include <stdio.h>
int main()
{
    unsigned int n;
    if (scanf("%u", &n) != 1)
        return 0;
    unsigned long long f = 1;
    for (unsigned int i = 1; i <= n; i++)
        f *= i;
    printf("%llu", f);
    return 0;
}
