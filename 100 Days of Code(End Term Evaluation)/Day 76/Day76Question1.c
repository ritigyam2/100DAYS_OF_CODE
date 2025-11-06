//(File Handling) Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content

#include <stdio.h>

int main() {
    char filename[100];
    FILE *fp;
    char ch;

    // Ask the user for a filename
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check if file exists or not
    if (fp == NULL) {
        printf("Error: Could not open file '%s'. File may not exist.\n", filename);
        return 1;
    }

    // If file opened successfully, display its contents
    printf("\n--- File Content ---\n\n");
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}
