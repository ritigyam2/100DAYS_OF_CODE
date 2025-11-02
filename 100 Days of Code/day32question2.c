#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int t = a[i];
        a[i] = a[j];
        a[j] = t;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
