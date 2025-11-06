#include <stdio.h>
int main()
{
    int n, t;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &t);
    int l = 0, r = n - 1, ans = -1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == t)
        {
            ans = m;
            break;
        }
        else if (a[m] < t)
            l = m + 1;
        else
            r = m - 1;
    }
    printf("%d", ans);
    return 0;
}
