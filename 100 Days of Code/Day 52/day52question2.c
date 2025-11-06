#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1000], x;
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &x);
    int ans = -1;
    for (int i = 0; i < n; i++)
        if (a[i] >= x)
        {
            ans = i;
            break;
        }
    printf("%d", ans);
    return 0;
}
