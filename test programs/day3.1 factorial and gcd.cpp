#include<stdio.h>
int gcd(int a,int b);
void fact(int c);
int main()
{
	int a,b,c,f;
	printf("enter the 1st number;\n");
	scanf("%d",&a);
	printf("enter the 2nd number:\n");
	scanf("%d",&b);
		
		printf("the gcd of %d and %d is %d\n",a,b,gcd(a,b));
		
		printf("enter number for finding factorial;\n");
		scanf("%d",&c);
		fact(c);
		
		return 0;
	
}

int gcd(int a ,int b)
{
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}

void fact(int c){
	int i,f=1;
	for(i=0;i<c;i++){
		f=f*i;	
	}
	printf("the factorial is:%d",f)	;	
	
}
