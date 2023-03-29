#include<stdio.h>

int main()
{
	int arr[30];
	int n,i,a;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	
	for(i=0;i<n;++i){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;++i){
		if(arr[i]%2!=0){
			printf("%d is odd number:\n",arr[i]);
		}
		else{
			a++;
		}
		
	}
	return 0;
}
