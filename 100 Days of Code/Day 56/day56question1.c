#include <stdio.h>
int main()
{
    int n, k;
    if (scanf("%d%d", &n, &k) != 2)
        return 0;
    long long a[100000];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    long long s = 0;
    for (int i = 0; i < k && i < n; i++)
        s += a[i];
    long long best = s;
    for (int i = k; i < n; i++)
    {
        s += a[i] - a[i - k];
        if (s > best)
            best = s;
    }
    if (n < k)
        best = 0;
    printf("%lld", best);
    return 0;
}
