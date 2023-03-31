#include <stdio.h>

union measurement {
    float value_inch;
    int value_cents;
};

int main() {
    union measurement measure;
    char unit[10];
    printf("Enter a measurement value: ");
    scanf("%f", &measure.value_inch);
    printf("Enter the unit of measurement (inch/feet/yards/meters): ");
    scanf("%s", unit);

    printf("\nConverted Values\n");
    printf("Inches: %.2f\n", measure.value_inch);
    if (unit[0] == 'i') {
        measure.value_cents = (int)(measure.value_inch * 100.0);
    }
    else if (unit[0] == 'f') {
        measure.value_cents = (int)(measure.value_inch * 12.0 * 100.0);
    }
    else if (unit[0] == 'y') {
        measure.value_cents = (int)(measure.value_inch * 36.0 * 100.0);
    }
    else if (unit[0] == 'm') {
        measure.value_cents = (int)(measure.value_inch * 39.37 * 100.0);
    }
    printf("Feet: %.2f\n", (float)measure.value_cents / (12.0 * 100.0));
    printf("Yards: %.2f\n", (float)measure.value_cents / (36.0 * 100.0));
    printf("Meters: %.2f\n", (float)measure.value_cents / (39.37 * 100.0));

    return 0;
}
