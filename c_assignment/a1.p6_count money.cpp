int main() {
    int amount, notes500, notes100, notes50, notes20, notes10, notes5, notes2, notes1;
    notes500 = notes100 = notes50 = notes20 = notes10 = notes5 = notes2 = notes1 = 0;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    if (amount >= 500) {
        notes500 = amount / 500;
        amount = amount - notes500 * 500;
    }

    if (amount >= 100) {
        notes100 = amount / 100;
        amount = amount - notes100 * 100;
    }

    if (amount >= 50) {
        notes50 = amount / 50;
        amount = amount - notes50 * 50;
    }

    if (amount >= 20) {
        notes20 = amount / 20;
        amount = amount - notes20 * 20;
    }

    if (amount >= 10) {
        notes10 = amount / 10;
        amount = amount - notes10 * 10;
    }

    if (amount >= 5) {
        notes5 = amount / 5;
        amount = amount - notes5 * 5;
    }

    if (amount >= 2) {
        notes2 = amount / 2;
        amount = amount - notes2 * 2;
    }

    if (amount >= 1) {
        notes1 = amount / 1;
        amount = amount - notes1 * 1;
    }

    printf("Total number of notes:\n");
    printf("500: %d\n", notes500);
    printf("100: %d\n", notes100);
    printf("50: %d\n", notes50);
    printf("20: %d\n", notes20);
    printf("10: %d\n", notes10);
    printf("5: %d\n", notes5);
    printf("2: %d\n", notes2);
    printf("1: %d\n", notes1);

    return 0;
}
