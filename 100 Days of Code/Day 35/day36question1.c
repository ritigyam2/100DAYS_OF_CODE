#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long a[1000];
    for (int i = 0; i < n; i++)
        scanf("%lld", &a[i]);
    long long m1 = -9223372036854775807LL, m2 = -9223372036854775807LL;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m1)
        {
            m2 = m1;
            m1 = a[i];
        }
        else if (a[i] < m1 && a[i] > m2)
        {
            m2 = a[i];
        }
    }
    if (m2 == -9223372036854775807LL)
        printf("-1");
    else
        printf("%lld", m2);
    return 0;
}
