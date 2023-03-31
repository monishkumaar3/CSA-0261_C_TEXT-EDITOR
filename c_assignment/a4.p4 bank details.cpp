#include <stdio.h>
#include <string.h>
struct customer {
    int account_no;
    char name[50];
    float balance;
};
void print_low_balance_customers(struct customer bank[], int size) {
    printf("Customers with balance less than 100 Rs:\n");
    for (int i = 0; i < size; i++) {
        if (bank[i].balance < 100) {
            printf("Account No: %d\tName: %s\n", bank[i].account_no, bank[i].name);
        }
    }
}
int main() {
    struct customer bank[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter customer %d details:\n", i + 1);
        printf("Account No: ");
        scanf("%d", &bank[i].account_no);
        printf("Name: ");
        getchar();
        fgets(bank[i].name, 50, stdin);
        bank[i].name[strcspn(bank[i].name, "\n")] = '\0'; 
        printf("Balance: ");
        scanf("%f", &bank[i].balance);
    }
    print_low_balance_customers(bank, 3);
    return 0;
}
