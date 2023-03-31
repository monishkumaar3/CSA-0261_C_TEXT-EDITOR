#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union my_data {
    int integer;
    float floating_point;
    char string[50];
};

int main() {
    union my_data data;
    char input[50];
    
    printf("Enter a value: ");
    fgets(input, sizeof(input), stdin);

    int num = atoi(input);
    if (num != 0 || input[0] == '0') {
        data.integer = num;
        printf("You entered an integer: %d\n", data.integer);
    }
    else {
        float num = atof(input);
        if (num != 0.0 || input[0] == '0') {
            data.floating_point = num;
            printf("You entered a floating-point number: %.2f\n", data.floating_point);
        }
        else {
            strcpy(data.string, input);
            data.string[strlen(data.string)-1] = '\0'; 
            printf("You entered a string: %s\n", data.string);
        }
    }

    return 0;
}
