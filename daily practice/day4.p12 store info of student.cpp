#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {

    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name for student %d: ", i+1);
        fgets(students[i].name, 50, stdin);
        printf("Enter id for student %d: ", i+1);
        scanf("%d", &students[i].id);
        printf("Enter gpa for student %d: ", i+1);
        scanf("%f", &students[i].gpa);
        getchar(); 
    }

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    return 0;
}
