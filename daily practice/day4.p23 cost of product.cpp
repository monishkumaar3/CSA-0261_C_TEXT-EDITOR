#include <stdio.h>


union price {
    float f;
    int i;
};


struct product {
    char name[50];
    union price price;
    int quantity;
};

int main() {

    struct product p;

    printf("Enter the product name: ");
    scanf("%s", p.name);

    printf("Enter the product price (as a float or an integer in cents): ");
    scanf("%f", &p.price.f);

    printf("Enter the product quantity: ");
    scanf("%d", &p.quantity);

  
    float total_cost = p.price.f * p.quantity;

    printf("The total cost of %d %s(s) is $%.2f\n", p.quantity, p.name, total_cost);

    return 0;
}
