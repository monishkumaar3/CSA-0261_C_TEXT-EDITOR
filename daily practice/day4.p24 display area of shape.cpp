#include <stdio.h>
#include <string.h>
#include <math.h>


union dimensions {
    float f;
    int i;
};

struct shape {
    char type[20];
    union dimensions dim1;
    union dimensions dim2;
};


float rectangle_area(float length, float width) {
    return length * width;
}

float circle_area(float radius) {
    return M_PI * radius * radius;
}

float triangle_area(float base, float height) {
    return 0.5 * base * height;
}

int main() {
 
    struct shape s;

    printf("Enter the shape type (rectangle, circle, or triangle): ");
    scanf("%s", s.type);

    printf("Enter the first dimension (as a float or an integer): ");
    scanf("%f", &s.dim1.f);

    printf("Enter the second dimension (as a float or an integer): ");
    scanf("%f", &s.dim2.f);

    float area;
    if (strcmp(s.type, "rectangle") == 0) {
        area = rectangle_area(s.dim1.f, s.dim2.f);
    } else if (strcmp(s.type, "circle") == 0) {
        area = circle_area(s.dim1.f);
    } else if (strcmp(s.type, "triangle") == 0) {
        area = triangle_area(s.dim1.f, s.dim2.f);
    } else {
        printf("Invalid shape type\n");
        return 1;
    }

    printf("The area of the %s is %.2f\n", s.type, area);

    return 0;
}
