//Write a program to print all factors of a given number

#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n == 0)
    {
        printf("All integers");
        return 0;
    }
    if (n < 0)
        n = -n;
    int first = 1;
    for (long long i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (!first)
                printf(" ");
            printf("%lld", i);
            first = 0;
        }
    }
    return 0;
}
