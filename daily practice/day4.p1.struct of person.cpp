#include<stdio.h>
#include<string.h>
struct person
{
	char name[30];
	int age;
	int height;
}p1;

int main()
{
	scanf("%s %d %d",p1.name,&p1.age,&p1.height);
   
   printf("%s %d %d",p1.name,p1.age,p1.height);
   
}
