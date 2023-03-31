#include<stdio.h>
union my_union{
	int a;
	float b;
}u;
int main(){
	printf("enter the number:");
	scanf("%d",&u.a);
	printf("enter the float:");
	scanf("%f",&u.b);
	
	printf("%d",u.a);
	printf("%f",u.b);
	
}
