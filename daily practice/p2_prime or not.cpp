#include<stdio.h>
main(){
	int a,i,c=0;
	printf("enter the number :");
	scanf(("%d"), &a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			c++;
			}
	}	
	if (c==2){
		printf("%d",a);
		printf(" is a prime number:");
	}
	else{
		printf("%d",a);
		printf(" is not a prime number:");
	}
	return 0;
}
