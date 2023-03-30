#include <stdio.h>

int check_prime(int num);

int main()
{
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i=2; i<=num/2; ++i)
    {
        if(check_prime(i) == 1)
        {
            if(check_prime(num-i) == 1)
            {
                printf("%d = %d + %d\n", num, i, num-i);
                flag = 1;
            }
        }
    }

    if(flag == 0)
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);

    return 0;
}

int check_prime(int num)
{
    int i, flag = 1;

    if(num == 0 || num == 1)
        flag = 0;
    else
    {
        for(i=2; i<=num/2; ++i)
        {
            if(num % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    return flag;
}
