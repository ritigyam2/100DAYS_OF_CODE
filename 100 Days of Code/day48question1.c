#include <stdio.h>
int main()
{
    char a[1000], b[1000];
    if (!fgets(a, 1000, stdin))
        return 0;
    if (!fgets(b, 1000, stdin))
        return 0;
    int f[26] = {0};
    for (int i = 0; a[i] && a[i] != '\n'; i++)
        f[a[i] - 'a']++;
    for (int i = 0; b[i] && b[i] != '\n'; i++)
        f[b[i] - 'a']--;
    int ok = 1;
    for (int i = 0; i < 26; i++)
        if (f[i])
            ok = 0;
    printf("%s", ok ? "Anagram" : "Not Anagram");
    return 0;
}
