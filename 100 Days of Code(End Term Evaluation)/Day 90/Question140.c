//Define a struct with enum Gender and print person's gender
#include <stdio.h>
#include <string.h> // Required for strcpy

// 1. Define the enumeration for Gender
enum Gender {
    MALE,   // Assigned value 0
    FEMALE, // Assigned value 1
    OTHER   // Assigned value 2
};

// 2. Define the structure for a Person
struct Person {
    char name[50];
    int age;
    enum Gender person_gender; // The enum is a member of the struct
};

int main() {
    // 3. Initialize a struct variable
    struct Person p1;
    strcpy(p1.name, "Alice");
    p1.age = 30;
    p1.person_gender = FEMALE; // Assign the enum value

    printf("--- Person Record ---\n");
    printf("Name: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    
    // 4. Print the gender using a switch statement
    printf("Gender: ");
    switch (p1.person_gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    // You can also print the underlying integer value of the enum:
    printf("Gender (Integer Value): %d\n", p1.person_gender);

    return 0;
}