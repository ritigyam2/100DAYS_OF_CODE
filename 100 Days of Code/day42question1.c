#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    int c = 0;
    while (s[c] && s[c] != '\n')
        c++;
    printf("%d", c);
    return 0;
}
