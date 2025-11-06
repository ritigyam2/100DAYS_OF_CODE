#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long a[1000];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i < n; i++)
    {
        long long g = -1;
        for (int j = i - 1; j >= 0; j--)
            if (a[j] > a[i])
            {
                g = a[j];
                break;
            }
        if (i)
            printf(",");
        printf("%lld", g);
    }
    return 0;
}
