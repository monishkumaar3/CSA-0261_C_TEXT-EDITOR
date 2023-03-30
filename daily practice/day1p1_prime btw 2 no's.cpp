#include <stdio.h>

main()
{

    int a, b, i, j, flag, c=0;
    printf("Enter lower bound of the interval: ");
    scanf("%d", &a); 
 	printf("\nEnter upper bound of the interval: ");
	scanf("%d", &b);
	printf("\nPrime numbers between %d and %d are: ", a, b);
 
    for (i = a; i <= b; i++) {
       if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {

                flag = 0;

                break;

            }

        }

        if (flag == 1)
        {
          printf("%d ", i);
          c++;
      }
    }
    printf("\nprime numbers between a and b:");
	printf("%d is the count", c);    
}
