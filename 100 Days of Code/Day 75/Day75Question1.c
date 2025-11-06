//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
int main() {
    FILE *fp;
    char newLine[100];

    fp = fopen("info.txt", "a"); // open in append mode
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a new line to append: ");
    getchar(); // to clear newline from previous input
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, fp);

    fclose(fp);
    printf("New line appended successfully!\n");

    return 0;
}
