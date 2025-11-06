//Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main()
{
    double cp, sp;
    if (scanf("%lf%lf", &cp, &sp) != 2)
        return 0;
    if (cp <= 0)
    {
        printf("Invalid");
        return 0;
    }
    if (sp > cp)
    {
        double p = (sp - cp) * 100.0 / cp;
        printf("Profit: %.2f%%", p);
    }
    else if (sp < cp)
    {
        double l = (cp - sp) * 100.0 / cp;
        printf("Loss: %.2f%%", l);
    }
    else
        printf("No Profit No Loss");
    return 0;
}
