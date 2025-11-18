//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h> // For exit()

// Define a structure to hold one student's record
struct Student {
    char name[50];
    int roll_number;
    int marks;
};

int main() {
    FILE *file;
    
    // --- PART 1: WRITING RECORDS TO THE FILE ---
    printf("--- Writing Records to students.txt ---\n");
    
    // 1. Define the records to be stored
    struct Student students_to_write[2] = {
        {"Asha", 101, 85},
        {"Ravi", 102, 92}
    };
    int num_records = 2;

    // 2. Open the file in write mode ("w")
    // "w" mode creates the file if it doesn't exist, or overwrites it if it does.
    file = fopen("students.txt", "w");
    
    if (file == NULL) {
        printf("Error: Could not open the file for writing.\n");
        exit(EXIT_FAILURE);
    }

    // 3. Use fprintf() to write each record to the file
    // We use a specific format (Name Roll Marks\n) for easy reading later.
    for (int i = 0; i < num_records; i++) {
        fprintf(file, "%s %d %d\n", 
                students_to_write[i].name, 
                students_to_write[i].roll_number, 
                students_to_write[i].marks);
    }
    
    printf("Successfully wrote %d records to students.txt\n", num_records);

    // 4. Close the file after writing
    fclose(file);

    // --- PART 2: READING RECORDS FROM THE FILE ---
    printf("\n--- Reading Records from students.txt ---\n");

    // 1. Open the file in read mode ("r")
    file = fopen("students.txt", "r");
    
    if (file == NULL) {
        // This check is mainly for robustness, the file should exist now.
        printf("Error: Could not open the file for reading.\n");
        exit(EXIT_FAILURE);
    }

    // 2. Prepare a variable to hold the student data read from the file
    struct Student student_read;
    
    // 3. Use fscanf() in a loop to read records until EOF
    // The format string must exactly match the format used in fprintf().
    printf("Records Displayed:\n");
    while (fscanf(file, "%s %d %d", 
                  student_read.name, 
                  &student_read.roll_number, 
                  &student_read.marks) == 3) { // Expecting 3 successful reads
        
        // Display the read record
        printf("Name: %s | Roll: %d | Marks: %d\n", 
               student_read.name, 
               student_read.roll_number, 
               student_read.marks);
    }

    // 4. Close the file after reading
    fclose(file);

    return 0;
}