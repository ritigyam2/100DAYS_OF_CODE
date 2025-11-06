//Write a program to check if a number is prime
#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n <= 1)
    {
        printf("Not Prime");
        return 0;
    }
    for (long long i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            printf("Not Prime");
            return 0;
        }
    printf("Prime");
    return 0;
}
