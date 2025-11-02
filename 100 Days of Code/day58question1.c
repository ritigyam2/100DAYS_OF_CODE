#include <stdio.h>
int main()
{
    int n, k;
    if (scanf("%d%d", &n, &k) != 2)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        int m = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[m])
                m = j;
        int t = a[i];
        a[i] = a[m];
        a[m] = t;
    }
    if (k < 1 || k > n)
        printf("-1");
    else
        printf("%d", a[k - 1]);
    return 0;
}
