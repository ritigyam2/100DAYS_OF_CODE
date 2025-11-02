#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    double s = 0;
    int num = 2, den = 3;
    for (int i = 0; i < n; i++)
    {
        s += (double)num / den;
        num += 2;
        den += 4;
    }
    printf("%.6f", s);
    return 0;
}
