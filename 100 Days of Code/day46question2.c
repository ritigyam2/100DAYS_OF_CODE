#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
            c -= 32;
        else if (c >= 'A' && c <= 'Z')
            c += 32;
        putchar(c);
    }
    return 0;
}
