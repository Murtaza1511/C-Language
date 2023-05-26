/* 15 8 3 12 30 7 9 17 32 19
   15 8 3 12 30 7 9 17 32 19
   15 12 8 3 30 7 9 17 32 19
   .  .  . .  .  . . .  .  .
   .  .  . .  .  . . .  .  .
   32 30 19 17 15 12 9 8 7 3
It is not done easily like in real life we do with cards we need to swap it 

loop invariant:- After k iterations k elements are relatively sorted but may not in correct position
according to sorted array

If the array is nearly sorted then insertion sort is more suitable as we will simply do linear 
scan and only when the element is not in proper place we have to do manipulations
*/
#include<stdio.h>
int main()
{
    int i,j;
    int temp;
    int A[10] = {15,8,3,12,30,7,9,17,32,19};
    int n= sizeof(A)/sizeof(int);
    for(i=1 ; i<=n-1; i++) // Here we are starting from 1 because 1 element array is always sorted
    {
        j=i;
        while(j>0 && A[j]>A[j-1])// Here we need to do j>0 condition first because otherwise
        // it may lead to invalid access of A[-1] which will lead to segementation fault
        {
         // Swap A[j] and A[j-1];
         temp = A[j];
         A[j] = A[j-1];
         A[j-1] = temp;
         j=j-1;
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d  ",A[i]);
    }
    // Whenever we try to do invalid memory access then we will get segmentation fault
    return 0;
}