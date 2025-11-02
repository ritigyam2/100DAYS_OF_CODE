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
        long long mx = a[i];
        for (int j = i + 1; j < i + k; j++)
            if (a[j] > mx)
                mx = a[j];
        printf("%lld ", mx);
    }
    return 0;
}
