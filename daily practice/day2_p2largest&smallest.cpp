#include<stdio.h>

int  main(){
	int arr[30];
	int i,j,a,num;
	printf("enter the size of array: \n");
	scanf("%d",&num);
	
	printf("enter the numbers:\n");
	for(i=0;i<num;++i)
	scanf("%d",&arr[i]);
	for (i=0;i<num;++i)
	{
		for(j=i+1;j<num;++j)
		{
			if(arr[i]<arr[j])
			{
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf("the numbers are arranged in descending order are given below:\n");
	for (i=0; i<num;++i){
		printf("%d\n",arr[i]);
	}
	printf("the 2nd largest number is:%d\n",arr[1]);
	printf("the 2nd smallest number is:%d\n",arr[num-2]);
	return 0;
}
