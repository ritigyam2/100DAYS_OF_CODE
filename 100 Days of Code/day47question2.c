#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int f[26] = {0};
    for (int i = 0; s[i] && s[i] != '\n'; i++)
    {
        int x = s[i] - 'a';
        if (x >= 0 && x < 26)
        {
            f[x]++;
            if (f[x] == 2)
            {
                printf("%c", s[i]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}
