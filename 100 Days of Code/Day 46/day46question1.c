#include <stdio.h>
int main()
{
    char s[1000], ch;
    if (!fgets(s, 1000, stdin))
        return 0;
    ch = getchar();
    int f = 0;
    for (int i = 0; s[i] && s[i] != '\n'; i++)
        if (s[i] == ch)
            f++;
    printf("%d", f);
    return 0;
}
