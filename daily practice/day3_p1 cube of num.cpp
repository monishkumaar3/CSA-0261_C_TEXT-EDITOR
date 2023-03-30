#include<stdio.h>
void cube(int a);
main()
    {
		int a;
		printf("enter the number:\n");
		scanf("%d",&a);
		cube(a); 
	}
	
void cube(int a)
    {
    	int c;
		c=a*a*a;
		printf("%d",c);
	}

