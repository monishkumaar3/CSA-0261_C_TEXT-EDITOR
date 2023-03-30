#include<stdio.h>
int main(){
	int arr[5]={1,2,3,-1,-2};
	int i ,pos=0,neg=0 ;
	for(i=0;i<5;i++)
	{
		if(arr[i]>0)
		{
		  	
		  pos++;
		}
		else
		{
			
			neg++;
		}
	}
	
	printf("the positive number count is:%d\n",pos);
	
	printf("the negative number count is:%d\n",neg);
	return 0;
}
