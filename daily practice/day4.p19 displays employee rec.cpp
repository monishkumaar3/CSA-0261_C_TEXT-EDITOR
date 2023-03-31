#include <stdio.h>
#include <string.h>

struct employee {
    char name[50];
    int age;
    float salary;
    char department[50];
};

void print_sales_employees(struct employee emp[], int size) {
    for(int i = 0; i < size; i++) {
        if(strcmp(emp[i].department, "Sales") == 0 && emp[i].salary > 50000.0) {
            printf("Name: %s, Age: %d, Salary: $%.2f, Department: %s\n",
                emp[i].name, emp[i].age, emp[i].salary, emp[i].department);
        }
    }
}

int main() {
    struct employee emp[] = {
        {"John Smith", 25, 60000.0, "Sales"},
        {"Jane Doe", 30, 55000.0, "Marketing"},
        {"Bob Johnson", 45, 70000.0, "Sales"}
    };

    int size = sizeof(emp) / sizeof(struct employee);

    print_sales_employees(emp, size);

    return 0;
}
