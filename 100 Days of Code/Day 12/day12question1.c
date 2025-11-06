//Write a program to calculate library fine based on late days as follows: First 5 days late: ₹2/day ,Next 5 days late: ₹4/day ,Next 20 days days late: ₹6/day ,More than 30 days: Membership Cancelled
#include <stdio.h>
int main()
{
    int d;
    if (scanf("%d", &d) != 1)
        return 0;
    if (d > 30)
    {
        printf("Membership Cancelled");
        return 0;
    }
    int x = d;
    int fine = 0;
    int t = x > 5 ? 5 : x;
    fine += t * 2;
    x -= t;
    if (x > 0)
    {
        t = x > 5 ? 5 : x;
        fine += t * 4;
        x -= t;
    }
    if (x > 0)
    {
        t = x > 20 ? 20 : x;
        fine += t * 6;
        x -= t;
    }
    if (d <= 0)
        fine = 0;
    printf("%d", fine);
    return 0;
}
