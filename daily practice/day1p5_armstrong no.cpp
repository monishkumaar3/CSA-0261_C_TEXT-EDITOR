#include <stdio.h>
int main() {
    int n, originalNum, rem, result = 0;
    printf("Enter a 3digit integer: ");
    scanf("%d", &n);
    originalNum = n;

    while (originalNum != 0) {
        rem = originalNum % 10;
        
       result += rem * rem * rem;
       originalNum /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}
