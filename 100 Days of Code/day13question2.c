#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > 1)
            printf(" ");
        printf("%d", i);
    }
    return 0;
}
