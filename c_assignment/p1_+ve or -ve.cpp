#include<stdio.h>
int main()
{
	int a;
	printf("enter the given number:");
	scanf("%d",&a);
	if(a>0)
		printf("the given number is positive\n");
	else if(a<0)
	    printf("the given number is negative\n");
	else
	    printf("the given number is zero\n");
	    return 0;
}
