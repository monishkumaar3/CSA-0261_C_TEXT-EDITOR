#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union my_union {
    int integer;
    char string[50];
};

int main() {
    union my_union value;
    char input[50];
    
    printf("Enter a value: ");
    fgets(input, sizeof(input), stdin);

    int num = atoi(input);
    if (num != 0 || input[0] == '0') {
        value.integer = num;
        printf("You entered an integer: %d\n", value.integer);
    }
    else {
        strcpy(value.string, input);
        printf("You entered a string: %s\n", value.string);
    }

    return 0;
}
