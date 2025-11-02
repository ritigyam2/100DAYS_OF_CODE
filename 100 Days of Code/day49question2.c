#include <stdio.h>
void rev(char *s, int l, int r)
{
    while (l < r)
    {
        char t = s[l];
        s[l] = s[r];
        s[r] = t;
        l++;
        r--;
    }
}
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int i = 0;
    while (s[i])
    {
        while (s[i] == ' ')
            i++;
        int l = i;
        while (s[i] && s[i] != ' ' && s[i] != '\n')
            i++;
        int r = i - 1;
        if (l <= r)
            rev(s, l, r);
        if (s[i] == '\n')
            break;
        if (s[i] == ' ')
            i++;
    }
    for (int j = 0; s[j]; j++)
    {
        if (s[j] == '\n')
        {
            putchar('\n');
            break;
        }
        putchar(s[j]);
    }
    return 0;
}
