#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long s = 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        s += a;
    }
    printf("%lld", s);
    return 0;
}
