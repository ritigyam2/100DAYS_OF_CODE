#include <stdio.h>
int main()
{
    int r, c;
    if (scanf("%d%d", &r, &c) != 2)
        return 0;
    int a[100][100];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int col = 0; col < c; col++)
    {
        int i = 0, j = col;
        while (i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }
    for (int row = 1; row < r; row++)
    {
        int i = row, j = c - 1;
        while (i < r && j >= 0)
        {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
    }
    return 0;
}
