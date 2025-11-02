#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[1000];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
            if (a[j] == a[i])
                c++;
        if (c > n / 2)
        {
            ans = a[i];
            break;
        }
    }
    if (ans == -1)
        printf("-1");
    else
        printf("%d", ans);
    return 0;
}
