#include <stdio.h>
int main()
{
    int n, pos;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &pos);
    if (pos >= 0 && pos < n)
    {
        for (int i = pos; i < n - 1; i++)
            a[i] = a[i + 1];
        n--;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}
