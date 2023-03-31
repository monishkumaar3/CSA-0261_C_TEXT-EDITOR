#include <stdio.h>
#include <math.h>

struct point {
    int x;
    int y;
};

struct circle {
    float radius;
    struct point center;
};

float area_of_circle(struct circle c) {
    return M_PI * c.radius * c.radius;
}

int main() {
    struct circle c = {3.5, {0, 0}};
    float area = area_of_circle(c);
    printf("The area of the circle is %f\n", area);
    return 0;
}
