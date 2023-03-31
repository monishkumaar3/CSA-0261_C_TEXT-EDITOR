#include <stdio.h>

int main() {
    int num, result = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(; num != 0; num /= 10) {
        rem = num % 10;
        result = result * 10 + rem;
    }

    printf("The reverse of %d is %d", num, result);

    return 0;
}
