#include <stdio.h>
int main()
{
    int c;
    if (scanf(" %c", (char *)&c) != 1)
        return 0;
    if (c >= 'A' && c <= 'Z')
        printf("Uppercase Alphabet");
    else if (c >= 'a' && c <= 'z')
        printf("Lowercase Alphabet");
    else if (c >= '0' && c <= '9')
        printf("Digit");
    else
        printf("Special Character");
    return 0;
}
