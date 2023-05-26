// 15 8 3 12 30 7 9 17 32 19
// 32 8 3 12 30 7 9 17 15 19 
// 32 30 3 12 8 7 9 17 15 19
// .   .  . .  . . . .  .  .
// .   .  . .  . . . .  .  .
// 32 30 19 17 15 12 9 8 7 3
/* Pseudo Code
while(i<n)
. maxindex = index of the max element in the part of the array indexed from i to n-1 Find maxindex
.swap elements array[i] and array[maxindex]

loop invariant :- After k iterations of the loop k elements are in correct position of sorted array
*/

#include <stdio.h>
int main()
{
    int i,j;
    int temp, maxindex;
    int A[10] = {15,8,3,12,30,7,9,17,32,19};
    int n= sizeof(A)/sizeof(int);
    for(i=0; i<n; i++)
    {
        maxindex = i;
        for(j=i+1; j<n; j++)
        {
            if(A[j]>A[maxindex])
                maxindex = j;
        }
        temp = A[i];
        A[i] = A[maxindex];
        A[maxindex] = temp;
    }
    for(i=0; i<n; i++)
    {
        printf("%d  ",A[i]);
    }
    return 0;
    //selection sort sees every input in the same way and it does roughly n(n+1)/2 comparisons

}
