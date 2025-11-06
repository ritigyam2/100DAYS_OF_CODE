#include <stdio.h>
int main()
{
    long long y;
    if (scanf("%lld", &y) != 1)
        return 0;
    if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
        printf("Leap Year");
    else
        printf("Not a Leap Year");
    return 0;
}
