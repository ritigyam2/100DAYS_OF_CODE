//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms
#include <stdio.h>
int main()
{
    int n, t;
    if (scanf("%d", &n) != 1)
        return 0;
    t = n;
    int s = 0;
    while (t)
    {
        int d = t % 10;
        int f = 1;
        for (int i = 1; i <= d; i++)
            f *= i;
        s += f;
        t /= 10;
    }
    if (s == n)
        printf("Strong");
    else
        printf("Not Strong");
    return 0;
}
