#include <stdio.h>
int main()
{
    int n, k;
    if (scanf("%d%d", &n, &k) != 2)
        return 0;
    long long a[1000];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    for (int i = 0; i + k <= n; i++)
    {
        long long val = 0;
        for (int j = i; j < i + k; j++)
        {
            if (a[j] < 0)
            {
                val = a[j];
                break;
            }
        }
        printf("%lld ", val);
    }
    return 0;
}
