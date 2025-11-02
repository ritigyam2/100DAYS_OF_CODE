#include <stdio.h>
int main()
{
    int n, x;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1005];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    int i = n - 1;
    while (i >= 0 && a[i] > x)
    {
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;
    for (int j = 0; j < n; j++)
        printf("%d ", a[j]);
    return 0;
}
