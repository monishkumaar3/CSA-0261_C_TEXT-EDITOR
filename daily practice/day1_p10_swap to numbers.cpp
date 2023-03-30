#include<stdio.h>
int main() {
   int m, n, temp;
   printf("Enter the value of m and n: ");
   scanf("%d %d", &m, &n);
   printf("Before swapping m=%d, n=%d ", m, n);
   temp = m;
   m = n;
   n = temp;
   printf("After swapping m=%d, n=%d", m, n);
   return 0; 
}
