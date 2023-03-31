#include <stdio.h>

int main(){
	char ch;
	printf("enyter a character:");
	scanf("%c",&ch);
	if ((ch>='a' && ch<='z')||(ch>='A'&& ch<='z')){
		printf("%c is an alphabet.",ch);
	}
	else{
		printf("%c is not an alphabet",ch );
	}
	return 0;
}
