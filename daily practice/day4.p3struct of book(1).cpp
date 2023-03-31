#include<stdio.h>
struct books{
	char title[50];
	char author[50];
	float price;
	
}p1[5];
int main()
{
	int i;
	for (i=0;i<5;i++)
	{
		scanf("%s %s %f\n",p1[i].title,p1[i].author,&p1[i].price);
		
	}
	for (i=0;i<5;i++)
	{
		printf("%s %s %f\n",p1[i].title,p1[i].author,p1[i].price);
		
	}
}

