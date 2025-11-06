#include <stdio.h>
int main()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        int t = c | 32;
        if (!(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u'))
            putchar(c);
    }
    return 0;
}
