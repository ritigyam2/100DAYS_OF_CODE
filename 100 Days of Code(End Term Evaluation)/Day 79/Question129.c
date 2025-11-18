//A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    // 1. Declare variables
    FILE *file;
    int number;
    int sum = 0;
    int count = 0;
    float average = 0.0;

    // 2. Open the file for reading
    // "r" mode opens an existing file for reading
    file = fopen("numbers.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error: Could not open the file numbers.txt\n");
        // Exit the program with an error status
        exit(EXIT_FAILURE);
    }

    // 3. Read integers from the file, compute sum and count
    // The loop continues as long as fscanf successfully reads an integer (returns 1)
    // The fscanf function automatically skips whitespace (spaces, newlines, tabs)
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    // 4. Close the file
    fclose(file);

    // 5. Compute the average and print results
    if (count > 0) {
        // Cast 'sum' to float before division to ensure floating-point arithmetic
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        // Print average with two decimal places
        printf("Average = %.2f\n", average);
    } else {
        printf("The file is empty or contains no valid integers.\n");
    }

    return 0;
}