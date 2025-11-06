//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
void pb(unsigned int n)
{
    if (n == 0)
        return;
    pb(n / 2);
    printf("%u", n % 2);
}
int main()
{
    unsigned int n;
    if (scanf("%u", &n) != 1)
        return 0;
    if (n == 0)
        printf("0");
    else
        pb(n);
    return 0;
}
