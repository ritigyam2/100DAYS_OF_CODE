#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long a[1000], s = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
        s += a[i];
    }
    long long left = 0;
    for (int i = 0; i < n; i++)
    {
        if (left == s - left - a[i])
        {
            printf("%d", i);
            return 0;
        }
        left += a[i];
    }
    printf("-1");
    return 0;
}
