//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n term
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
