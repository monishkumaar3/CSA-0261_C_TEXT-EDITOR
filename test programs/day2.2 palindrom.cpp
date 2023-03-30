#include <stdio.h>
#include<string.h>

int check(char*s)
{
	int i,c=0,n;
		n=strlen(s);
		for(i=0;i<n/2;i++)
		{
			if(s[i]==s[n-i-1])
			c++;
		}
		if(c==i)
		{
			return 1;
		}
		else
		{
			return 0;
		}
}
int main()
{
	char s[1000];
	printf("enter the string:");
	scanf("%s",s);
	if(check(s))
	{
		printf("it is palindrom");
	}
	else
	{
		printf("not a palindrom");
	}
}
