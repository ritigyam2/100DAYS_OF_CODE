//Write a program to check if a number is a palindrome.
#include <stdio.h>
long long llabsll(long long x) { return x < 0 ? -x : x; }
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n < 0)
    {
        printf("Not Palindrome");
        return 0;
    }
    long long x = n, r = 0;
    if (x == 0)
        r = 0;
    while (x > 0)
    {
        r = r * 10 + (x % 10);
        x /= 10;
    }
    if (r == n)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
