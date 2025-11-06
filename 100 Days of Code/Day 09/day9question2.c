//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100: Grade A, 80-89: Grade B, 70-79: Grade C, 60-69: Grade D ,below 60: Grade F.#include <stdio.h>
int main()
{
    int p;
    if (scanf("%d", &p) != 1)
        return 0;
    if (p < 0 || p > 100)
    {
        printf("Invalid");
        return 0;
    }
    if (p >= 90)
        printf("Grade A");
    else if (p >= 80)
        printf("Grade B");
    else if (p >= 70)
        printf("Grade C");
    else if (p >= 60)
        printf("Grade D");
    else
        printf("Grade F");
    return 0;
}
