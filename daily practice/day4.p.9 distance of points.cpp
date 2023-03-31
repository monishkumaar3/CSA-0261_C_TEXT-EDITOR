#include<stdio.h>
#include<math.h>
struct point{
	float x1,x2;
	float y1,y2;
}p1;
int main()
{
	float dis,x,y;
	printf("enter the x1 point:");dhjf
	scanf("%f",&p1.x1);
	printf("enter the x2 point:");
	scanf("%f",&p1.x2);
	printf("enter the y1 point:");
	scanf("%f",&p1.y1);
	printf("enter the y2 point:");
	scanf("%f",&p1.y2);
	
	x=p1.x2-p1.x1;
	y=p1.y2-p1.y1;
	
	dis=sqrt(x*x+y*y);
	
	printf("%f",dis);
		
	
}
