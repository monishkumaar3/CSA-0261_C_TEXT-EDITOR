#include <stdio.h>

void printEvenNumbers(int n);
void printOddNumbers(int n);

int main()
{
    int n, choice;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("Choose an option:\n");
    printf("1. Print even numbers from 1 to %d\n", n);
    printf("2. Print odd numbers from 1 to %d\n", n);
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            printf("Even numbers from 1 to %d are: ", n);
            printEvenNumbers(n);
            break;
        case 2:
            printf("Odd numbers from 1 to %d are: ", n);
            printOddNumbers(n);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }
    
    return 0;
}

void printEvenNumbers(int n)
{
    if (n > 0)
    {
        printEvenNumbers(n - 1);
        if (n % 2 == 0)
        {
            printf("%d ", n);
        }
    }
}

void printOddNumbers(int n)
{
    if (n > 0)
    {
        printOddNumbers(n - 1);
        if (n % 2 != 0)
        {
            printf("%d ", n);
        }
    }
}
