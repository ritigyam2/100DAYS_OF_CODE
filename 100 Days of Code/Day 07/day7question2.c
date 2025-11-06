//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char c;
    if (scanf(" %c", &c) != 1)
        return 0;
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        char x = c | 32;
        if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
            printf("Vowel");
        else
            printf("Consonant");
    }
    else
        printf("Invalid");
    return 0;
}
