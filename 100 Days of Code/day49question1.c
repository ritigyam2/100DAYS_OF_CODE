#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    if (!fgets(a, 1000, stdin))
        return 0;
    if (!fgets(b, 1000, stdin))
        return 0;
    int n = 0, m = 0;
    while (a[n] && a[n] != '\n')
        n++;
    while (b[m] && b[m] != '\n')
        m++;
    if (n != m)
    {
        printf("No");
        return 0;
    }
    for (int s = 0; s < n; s++)
    {
        int ok = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[(s + i) % n] != b[i])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}
