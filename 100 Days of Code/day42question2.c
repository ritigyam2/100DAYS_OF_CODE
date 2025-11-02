#include <stdio.h>
int main()
{
    char s[1000];
    if (!fgets(s, 1000, stdin))
        return 0;
    for (int i = 0; s[i] && s[i] != '\n'; i++)
        printf("%c\n", s[i]);
    return 0;
}
