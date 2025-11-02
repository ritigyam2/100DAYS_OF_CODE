#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int n = 0;
    while (s[n] && s[n] != '\n')
        n++;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
                putchar(s[k]);
            printf("\n");
        }
    }
    return 0;
}
