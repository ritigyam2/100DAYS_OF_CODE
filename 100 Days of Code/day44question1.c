#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int n = 0;
    while (s[n] && s[n] != '\n')
        n++;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        char t = s[i];
        s[i] = s[j];
        s[j] = t;
    }
    s[n] = '\0';
    printf("%s", s);
    return 0;
}
