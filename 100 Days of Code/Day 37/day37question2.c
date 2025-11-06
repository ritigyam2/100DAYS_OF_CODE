#include <stdio.h>
int main()
{
    int r, c;
    if (scanf("%d%d", &r, &c) != 2)
        return 0;
    long long s = 0;
    int x;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &x);
            s += x;
        }
    printf("%lld", s);
    return 0;
}
