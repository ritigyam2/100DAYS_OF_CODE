//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n % 2 == 0)
        printf("%lld is even", n);
    else
        printf("%lld is odd", n);
    return 0;
}
