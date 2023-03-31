#include<stdio.h>
struct rectangle{
	float height;
	float width;

}r;
int main(){
	int area;
	r.height=20;
	r.width=20;
	area=r.height*r.width;
	printf("area=%d",area);
}
