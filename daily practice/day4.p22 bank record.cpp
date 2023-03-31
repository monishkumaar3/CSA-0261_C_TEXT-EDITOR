#include <stdio.h>

typedef union {
    float balance;
    int balance_in_cents;
} AccountBalance;

typedef struct {
    char name[50];
    int account_number;
    AccountBalance balance;
} Account;

void deposit(Account* account, float amount) {
    account->balance.balance += amount;
    printf("Deposit of $%.2f successful. New balance is $%.2f.\n", amount, account->balance.balance);
}

void withdraw(Account* account, float amount) {
    if (account->balance.balance < amount) {
        printf("Insufficient funds. Current balance is $%.2f.\n", account->balance.balance);
    } else {
        account->balance.balance -= amount;
        printf("Withdrawal of $%.2f successful. New balance is $%.2f.\n", amount, account->balance.balance);
    }
}

void check_balance(Account* account) {
    printf("Current balance is $%.2f.\n", account->balance.balance);
}

int main() {
    Account account = {"John Smith", 123456, .balance = {0.0f}};
    char choice;
    float amount;

    printf("Welcome, %s!\n", account.name);

    do {
        printf("\nMenu:\n");
        printf("D - Deposit\n");
        printf("W - Withdraw\n");
        printf("B - Check balance\n");
        printf("Q - Quit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'D':
                printf("Enter amount to deposit: $");
                scanf("%f", &amount);
                deposit(&account, amount);
                break;
            case 'W':
                printf("Enter amount to withdraw: $");
                scanf("%f", &amount);
                withdraw(&account, amount);
                break;
            case 'B':
                check_balance(&account);
                break;
            case 'Q':
                printf("Thank you for using our services!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 'Q');

    return 0;
}
