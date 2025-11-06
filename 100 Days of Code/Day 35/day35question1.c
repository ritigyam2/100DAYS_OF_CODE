#include <stdio.h>
int main()
{
    int n, pos, val;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1005];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d%d", &pos, &val);
    if (pos < 0)
        pos = 0;
    if (pos > n)
        pos = n;
    for (int i = n; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
    n++;
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
