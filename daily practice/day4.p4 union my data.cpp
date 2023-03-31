#include <stdio.h>
union my_data {
    int integer;
    float floating_point;
};
int main() {
    union my_data data;
    float input_float;
    int input_int;
    printf("Enter a number: ");
    if (scanf("%f", &input_float) == 1) {
        data.floating_point = input_float;
        printf("You entered a floating-point number: %f\n", data.floating_point);
    } else if (scanf("%d", &input_int) == 1) {
        data.integer = input_int;
        printf("You entered an integer: %d\n", data.integer);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}
