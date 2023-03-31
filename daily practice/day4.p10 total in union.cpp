#include <stdio.h>

union my_union {
    int integer;
    float floating_point;
};

int main() {
    union my_union arr[5];
    float total = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Enter a value for union %d:\n", i+1);
        printf("Integer: ");
        scanf("%d", &arr[i].integer);
        printf("Floating point: ");
        scanf("%f", &arr[i].floating_point);
    }

    for (int i = 0; i < 5; i++) {
        total += (float) arr[i].integer + arr[i].floating_point;
    }

    printf("The total of all the values in the unions is: %.2f\n", total);

    return 0;
}
