#include <stdio.h>
int main()
{
    for (int i = 1; i <= 9; i += 2)
    {
        for (int s = 0; s < (9 - i) / 2; s++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 7; i >= 1; i -= 2)
    {
        for (int s = 0; s < (9 - i) / 2; s++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
