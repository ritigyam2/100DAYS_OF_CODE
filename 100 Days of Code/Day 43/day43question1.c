#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int v = 0, c = 0;
    for (int i = 0; s[i] && s[i] != '\n'; i++)
    {
        char ch = s[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            char t = ch | 32;
            if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
                v++;
            else
                c++;
        }
    }
    printf("%d %d", v, c);
    return 0;
}
