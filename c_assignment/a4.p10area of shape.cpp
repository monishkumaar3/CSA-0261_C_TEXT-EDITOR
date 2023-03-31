#include <stdio.h>

#define PI 3.14159

union shape {
    float radius;
    struct {
        float length;
        float width;
    } rectangle;
};

int main() {
    union shape s;
    char choice;

    printf("Enter shape type (c)ircle or (r)ectangle: ");
    scanf("%c", &choice);

    if(choice == 'c') {
        printf("Enter radius: ");
        scanf("%f", &s.radius);
        printf("Area of circle: %.2f\n", PI * s.radius * s.radius);
    }
    else if(choice == 'r') {
        printf("Enter length: ");
        scanf("%f", &s.rectangle.length);
        printf("Enter width: ");
        scanf("%f", &s.rectangle.width);
        printf("Area of rectangle: %.2f\n", s.rectangle.length * s.rectangle.width);
    }
    else {
        printf("Invalid choice.\n");
    }

    return 0;
}
