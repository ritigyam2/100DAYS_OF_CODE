#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    int a[100][100], v[2001] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; i++)
    {
        int x = a[i][i] + 1000;
        if (v[x])
        {
            printf("Not Distinct");
            return 0;
        }
        v[x] = 1;
    }
    printf("Distinct");
    return 0;
}
