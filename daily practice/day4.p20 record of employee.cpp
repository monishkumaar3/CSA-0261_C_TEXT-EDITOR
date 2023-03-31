#include <stdio.h>

union wage {
    float hourly_wage;
    int hourly_wage_cents;
};

struct employee {
    char name[50];
    int id;
    union wage wage_info;
};

int main() {
    struct employee emp;
    printf("Enter the employee's name: ");
    scanf("%s", emp.name);
    printf("Enter the employee's ID number: ");
    scanf("%d", &emp.id);
    printf("Enter the employee's hourly wage: ");
    scanf("%f", &emp.wage_info.hourly_wage);

    printf("\nEmployee Information\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Hourly wage (float): $%.2f\n", emp.wage_info.hourly_wage);
    printf("Hourly wage (integer in cents): %d cents\n", emp.wage_info.hourly_wage_cents);

    return 0;
}

