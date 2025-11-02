#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int n = 0;
    while (s[n] && s[n] != '\n')
        n++;
    int last = 0;
    for (int i = 0; i < n; i++)
        if (s[i] == ' ')
            last = i + 1;
    for (int i = 0; i < last; i++)
    {
        if (i == 0 || (s[i - 1] == ' ' && s[i] != ' '))
        {
            char c = s[i];
            if (c >= 'a' && c <= 'z')
                c -= 32;
            printf("%c. ", c);
            while (i < n && s[i] != ' ')
                i++;
        }
    }
    for (int i = last; i < n; i++)
        printf("%c", s[i]);
    return 0;
}
