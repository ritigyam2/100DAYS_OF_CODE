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
    int f = -1, l = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            if (f == -1)
                f = i;
            l = i;
        }
    }
    printf("%d %d", f, l);
    return 0;
}
