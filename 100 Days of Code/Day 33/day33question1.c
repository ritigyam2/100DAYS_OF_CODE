#include <stdio.h>
int main()
{
    int n, m;
    if (scanf("%d%d", &n, &m) != 2)
        return 0;
    int a[2000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < m; i++)
        scanf("%d", &a[n + i]);
    for (int i = 0; i < n + m; i++)
        printf("%d ", a[i]);
    return 0;
}
