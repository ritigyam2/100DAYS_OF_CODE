//Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i;
    int capitalize = 1;  // Start by capitalizing first letter

    for (i = 0; str[i] != '\0'; i++) {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            capitalize = 1;  // Capitalize after punctuation
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}