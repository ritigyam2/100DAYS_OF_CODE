#include <stdio.h>
int main()
{
    int n;
    long long k;
    if (scanf("%d%lld", &n, &k) != 2)
        return 0;
    int a[1000], b[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    if (n == 0)
    {
        return 0;
    }
    k %= n;
    for (int i = 0; i < n; i++)
    {
        int j = (i + k) % n;
        b[j] = a[i];
    }
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);
    return 0;
}
