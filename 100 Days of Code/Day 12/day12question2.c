//Write a program to calculate electricity bill based on units consumed with these rates: First 100 units at ₹5/unit ,Next 100 units at ₹7/unit ,Next 100 units at ₹10/unit ,Above at ₹12/unit
#include <stdio.h>
int main()
{
    int u;
    if (scanf("%d", &u) != 1)
        return 0;
    if (u < 0)
    {
        printf("Invalid");
        return 0;
    }
    long long bill = 0;
    int x = u;
    int t = x > 100 ? 100 : x;
    bill += (long long)t * 5;
    x -= t;
    if (x > 0)
    {
        t = x > 100 ? 100 : x;
        bill += (long long)t * 7;
        x -= t;
    }
    if (x > 0)
    {
        t = x > 100 ? 100 : x;
        bill += (long long)t * 10;
        x -= t;
    }
    if (x > 0)
    {
        bill += (long long)x * 12;
    }
    printf("%lld", bill);
    return 0;
}
