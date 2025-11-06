#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    int lastIndex[256];
    for(int i=0;i<256;i++)
        lastIndex[i] = -1;

    int maxLen = 0, start = 0;
    for(int i=0;s[i]!='\0';i++) {
        if(lastIndex[s[i]] >= start)
            start = lastIndex[s[i]] + 1;
        lastIndex[s[i]] = i;
        int len = i - start + 1;
        if(len > maxLen)
            maxLen = len;
    }
    printf("Length of longest substring: %d", maxLen);
    return 0;
}