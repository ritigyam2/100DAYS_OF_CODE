//Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters

#include <stdio.h>
#include <ctype.h>  // for tolower() and isalpha()

int main() {
    FILE *fp;
    char filename[100], ch;
    int vowels = 0, consonants = 0;

    // Ask user for file name
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open file '%s'. Please check the name.\n", filename);
        return 1;
    }

    // Read each character and count vowels/consonants
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);  // Convert to lowercase for easier comparison

        if (isalpha(ch)) { // Check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Close the file
    fclose(fp);

    // Display results
    printf("\nVowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
