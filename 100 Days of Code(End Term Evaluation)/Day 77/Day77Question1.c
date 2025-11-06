//(File Handling) Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt

#include <stdio.h>
#include <ctype.h>  // for toupper()

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file for reading
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt for reading.\n");
        return 1;
    }

    // Open output file for writing
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open output.txt for writing.\n");
        fclose(fin);
        return 1;
    }

    // Read each character from input.txt, convert to uppercase, and write to output.txt
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper(ch), fout);
    }

    printf("Text successfully converted to uppercase and written to output.txt\n");

    // Close both files
    fclose(fin);
    fclose(fout);

    return 0;
}
