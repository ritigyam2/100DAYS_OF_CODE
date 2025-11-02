#include <stdio.h>
int main()
{
    int n;
    if (scanf("%d", &n) != 1)
        return 0;
    long long total = (long long)n * (n + 1) / 2;
    long long left = 0;
    for (int x = 1; x <= n; x++)
    {
        left += x;
        long long right = total - (long long)(x - 1) * x / 2;
        if (left == right)
        {
            printf("%d", x);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
