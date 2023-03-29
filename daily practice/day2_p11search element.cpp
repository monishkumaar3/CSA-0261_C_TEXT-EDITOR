#include<stdio.h>
#include<conio.h>

int main()
{
  int arr[10],size,i,Element;
  printf("Enter size of the array: ");
  scanf("%d",&size);
  printf("Enter any %d integer values: ",size);
  for(i = 0; i < size; i++)
  {
    scanf("%d",&arr[i]);
  }

  printf("Enter the element to be Search: ");
  scanf("%d",&Element);
  for(i = 0; i < size; i++)
  {
  
     if(Element == arr[i])
     {
        printf("Element is found at %d index", i);
        break;
     }
 }
}
