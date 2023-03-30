#include <stdio.h>

int gcd(int a, int b);

int main()
{
    int a, b, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    lcm = (a*b)/gcd(a, b);

    printf("LCM of %d and %d is %d\n", a, b, lcm);

    return 0;
}

int gcd(int a, int b)
{
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}
