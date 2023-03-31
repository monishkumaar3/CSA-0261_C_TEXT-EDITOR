#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    float salary;
    int age;
};

int main() {
    struct employee employees[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter the name of employee %d: ", i+1);
        fgets(employees[i].name, sizeof(employees[i].name), stdin);
        employees[i].name[strcspn(employees[i].name, "\n")] = '\0'; 
        printf("Enter the salary of employee %d: ", i+1);
        scanf("%f", &employees[i].salary);
        printf("Enter the age of employee %d: ", i+1);
        scanf("%d", &employees[i].age);
        getchar(); 
    }

    printf("\nEmployee information:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d:\n", i+1);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("Age: %d\n", employees[i].age);
    }

    return 0;
}
