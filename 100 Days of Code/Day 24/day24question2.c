//Write a program to print the following pattern: 1 12 123 1234 12345

#include <stdio.h>
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
