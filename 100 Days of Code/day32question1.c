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
    int idx = -1;
    for (int i = 0; i < n; i++)
        if (a[i] == t)
        {
            idx = i;
            break;
        }
    printf("%d", idx);
    return 0;
}
