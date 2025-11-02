#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int e = 0, o = 0, x;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
            e++;
        else
            o++;
    }
    printf("%d %d", e, o);
    return 0;
}
