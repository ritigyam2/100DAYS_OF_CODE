//Store details of 5 students in an array of structures and print all

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input for 5 students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Output in table format
    printf("\n---------------------------------------------\n");
    printf(" Name\t\tRoll\tMarks\n");
    printf("---------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf(" %-10s\t%d\t%.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    printf("---------------------------------------------\n");

    return 0;
}
