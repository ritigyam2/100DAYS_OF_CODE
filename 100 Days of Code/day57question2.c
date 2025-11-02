#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long a[100000];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    long long best = a[0], cur = a[0];
    for (int i = 1; i < n; i++)
    {
        if (cur < 0)
            cur = a[i];
        else
            cur += a[i];
        if (cur > best)
            best = cur;
    }
    printf("%lld", best);
    return 0;
}
