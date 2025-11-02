#include <stdio.h>
int main()
{
    int g[5] = {1, 3, 5, 3, 1};
    for (int k = 0; k < 5; k++)
    {
        for (int i = 0; i < g[k]; i++)
            printf("*\n");
        if (k != 4)
            printf("\n");
    }
    return 0;
}
