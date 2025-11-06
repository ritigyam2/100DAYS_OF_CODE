#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long s = 0;
    int x;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &x);
            if (i == j)
                s += x;
        }
    printf("%lld", s);
    return 0;
}
