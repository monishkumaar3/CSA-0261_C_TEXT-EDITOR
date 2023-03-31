#include <stdio.h>
#define MAX_EMPLOYEES 100
struct employee {
    int eno;
    char ename[20];
    float salary;
};
int main() {
    int n, i;
    struct employee emp[MAX_EMPLOYEES];
    float max_salary = 0.0;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i + 1);
        printf("Employee number: ");
        scanf("%d", &emp[i].eno);
        printf("Employee name: ");
        scanf("%s", emp[i].ename);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }
    struct employee *highest_salary_emp = &emp[0];
    for (i = 0; i < n; i++) {
        if (emp[i].salary > highest_salary_emp->salary) {
            highest_salary_emp = &emp[i];
        }
    }
    printf("\nDetails of employee with highest salary:\n");
    printf("Employee number: %d\n", highest_salary_emp->eno);
    printf("Employee name: %s\n", highest_salary_emp->ename);
    printf("Salary: %.2f\n", highest_salary_emp->salary);
    return 0;
}
