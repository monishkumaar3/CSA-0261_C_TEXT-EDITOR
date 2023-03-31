#include <stdio.h>

int main() {
    int decimalNum, binaryNum = 0, base = 1, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    while (decimalNum > 0) {
        rem = decimalNum % 2;
        binaryNum += rem * base;
        base *= 10;
        decimalNum /= 2;
    }
    printf("Binary number: %d\n", binaryNum);

    return 0;
}
