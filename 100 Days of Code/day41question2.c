#include <stdio.h>
int main()
{
    int r1, c1, r2, c2;
    if (scanf("%d%d%d%d", &r1, &c1, &r2, &c2) != 4)
        return 0;
    if (c1 != r2)
    {
        printf("Invalid");
        return 0;
    }
    int a[100][100], b[100][100], c[100][100] = {0};
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
        {
            long long s = 0;
            for (int k = 0; k < c1; k++)
                s += a[i][k] * b[k][j];
            c[i][j] = s;
        }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
