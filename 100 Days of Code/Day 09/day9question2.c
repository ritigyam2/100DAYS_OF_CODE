#include <stdio.h>
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
