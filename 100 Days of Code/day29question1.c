#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    for (int x = 2; x <= n; x++)
    {
        int p = 1;
        for (int i = 2; i * i <= x; i++)
            if (x % i == 0)
            {
                p = 0;
                break;
            }
        if (p)
            printf("%d ", x);
    }
    return 0;
}
