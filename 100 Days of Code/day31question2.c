#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int p = 0, ne = 0, z = 0, x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x > 0)
            p++;
        else if (x < 0)
            ne++;
        else
            z++;
    }
    printf("%d %d %d", p, ne, z);
    return 0;
}
