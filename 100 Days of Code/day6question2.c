#include <stdio.h>
int main()
{
    long long n;
    if (scanf("%lld", &n) != 1)
        return 0;
    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");
    return 0;
}
