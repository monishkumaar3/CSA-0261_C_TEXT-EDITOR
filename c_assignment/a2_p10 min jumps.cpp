#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int minJumps(int arr[], int n)
{

    if (arr[0] == 0)
        return -1;

    int jumps = 1;  
    int maxReach = arr[0];  
    int steps = arr[0]; 
    for (int i = 1; i < n; i++)
    {

        if (i == n-1)
            return jumps;
        maxReach = (i + arr[i] > maxReach) ? i + arr[i] : maxReach;
        steps--;
        
        if (steps == 0)
        {
            jumps++;
            if (i >= maxReach)
                return -1;
            steps = maxReach - i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int minJumpsNeeded = minJumps(arr, n);
    
    if (minJumpsNeeded == -1)
        printf("The end is unreachable.\n");
    else
        printf("The minimum number of jumps needed to reach the end is %d.\n", minJumpsNeeded);
    
    return 0;
}
