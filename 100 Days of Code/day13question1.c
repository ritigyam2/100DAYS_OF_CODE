#include <stdio.h>
int main()
{
    long long a, b;
    char op;
    if (scanf("%lld %c %lld", &a, &op, &b) != 3)
        return 0;
    if (op == '+')
        printf("%lld", a + b);
    else if (op == '-')
        printf("%lld", a - b);
    else if (op == '*')
        printf("%lld", a * b);
    else if (op == '/')
    {
        if (b == 0)
            printf("Error");
        else
            printf("%.6f", (double)a / (double)b);
    }
    else if (op == '%')
    {
        if (b == 0)
            printf("Error");
        else
            printf("%lld", a % b);
    }
    else
        printf("Invalid");
    return 0;
}
