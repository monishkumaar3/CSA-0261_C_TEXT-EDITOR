#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for(int i = 1; i <= num/2; i++) {
        if(num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}

void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d are: ", start, end);
    for(int i = start; i <= end; i++) {
        if(isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start = 1, end = 1000;
    printPerfectNumbers(start, end);
    return 0;
}
