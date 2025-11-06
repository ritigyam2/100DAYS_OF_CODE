#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int sp = 0, d = 0, sc = 0;
    for (int i = 0; s[i] && s[i] != '\n'; i++)
    {
        char c = s[i];
        if (c == ' ')
            sp++;
        else if (c >= '0' && c <= '9')
            d++;
        else if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
            sc++;
    }
    printf("%d %d %d", sp, d, sc);
    return 0;
}
