#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int best = 0, bi = 0, c = 0, ci = 0;
    for (int i = 0;; i++)
    {
        char ch = s[i];
        if (ch == ' ' || ch == '\n' || ch == '\0')
        {
            if (c > best)
            {
                best = c;
                bi = ci;
            }
            if (ch == '\0')
                break;
            c = 0;
            ci = i + 1;
        }
        else
            c++;
    }
    for (int i = 0; i < best; i++)
        putchar(s[bi + i]);
    return 0;
}
