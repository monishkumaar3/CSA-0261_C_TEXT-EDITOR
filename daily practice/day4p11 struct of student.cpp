#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int id;
    float gpa;
};

int main() {

    struct student s1;

    s1.id = 1234;
    s1.gpa = 3.5;
    strcpy(s1.name, "John Smith");

    printf("Name: %s\n", s1.name);
    printf("ID: %d\n", s1.id);
    printf("GPA: %.2f\n", s1.gpa);

    return 0;
}
