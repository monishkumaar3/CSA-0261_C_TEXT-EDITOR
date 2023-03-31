#include <stdio.h>

union data {
    int num;
    float fnum;
};

int main() {
    union data d;
    char choice;

    printf("Enter a value (i)nteger or (f)loat: ");
    scanf("%c", &choice);

    if(choice == 'i') {
        printf("Enter an integer value: ");
        scanf("%d", &d.num);
        printf("You entered: %d\n", d.num);
    }
    else if(choice == 'f') {
        printf("Enter a float value: ");
        scanf("%f", &d.fnum);
        printf("You entered: %.2f\n", d.fnum);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
