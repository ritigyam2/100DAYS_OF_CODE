#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
        return 0;
    int x;
    scanf("%d", &x);
    int mn = x, mx = x;
    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);
        if (x < mn)
            mn = x;
        if (x > mx)
            mx = x;
    }
    printf("%d %d", mx, mn);
    return 0;
}
