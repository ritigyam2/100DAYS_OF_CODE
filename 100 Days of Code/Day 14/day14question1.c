//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    long long s = 0;
    for (long long i = 1; i <= n; i++)
        s += 2 * i - 1;
    printf("%lld", s);
    return 0;
}
