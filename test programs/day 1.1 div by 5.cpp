#include<stdio.h>
int main()
{
	int l,u,i;
	printf("lower range number:");
	scanf("%d",&l);
	printf("upper range number:");
	scanf("%d",&u);
	for(i=l;i>=l && i<=u;i+=1){
		if(i%5==0){
			printf("%d\n",i);
		}
	}
	printf("these are numbers divisible by 5:");
	return 0;
}
