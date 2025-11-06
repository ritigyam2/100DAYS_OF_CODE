#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long a[1000], L[1000], R[1000];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    if (n == 0)
        return 0;
    L[0] = 1;
    for (int i = 1; i < n; i++)
        L[i] = L[i - 1] * a[i - 1];
    R[n - 1] = 1;
    for (int i = n - 2; i >= 0; i--)
        R[i] = R[i + 1] * a[i + 1];
    for (int i = 0; i < n; i++)
        printf("%lld ", L[i] * R[i]);
    return 0;
}
