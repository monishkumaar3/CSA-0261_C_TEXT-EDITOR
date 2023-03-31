#include<stdio.h>

int main()
{
	char c;
	printf("enter the character:");
	scanf("%c",&c);
	
	if(c>='A' && c<='Z'){
		printf("uppercase");
	}else if(c>='a' && c<='z'){
		printf("lowercase");
	}else{
		printf("you did not entered the alphabet");
	}
	return 0;
}
