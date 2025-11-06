#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int start = 1;
    for (int i = 0; s[i] && s[i] != '\n'; i++)
    {
        if (start && s[i] != ' ')
        {
            char c = s[i];
            if (c >= 'a' && c <= 'z')
                c -= 32;
            printf("%c", c);
            start = 0;
        }
        if (s[i] == ' ')
            start = 1;
    }
    return 0;
}
