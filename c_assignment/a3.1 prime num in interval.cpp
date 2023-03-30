#include <stdio.h>

int check_prime(int num);

int main()
{
    int start, end, i, flag;

    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);

    for(i=start+1; i<end; ++i)
    {
        flag = check_prime(i);

        if(flag == 1)
            printf("%d ",i);
    }

    return 0;
}

int check_prime(int num)
{
    int j, flag = 1;

    for(j=2; j<=num/2; ++j)
    {
        if(num % j == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

