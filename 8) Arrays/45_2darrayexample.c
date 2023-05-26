#include <stdio.h>
#define N1 3
#define N2 4
void main()
{
    int matrix[N1][N2]={
        1,2,3,4,
        5,6,7,8,
        9,10,11,12};
    int i;
    for(i=0; i<N1; i++)
    {
        printf("%d\n",matrix[i][2]++);
    }

    for(i=0; i<N2; i++)
    {
        printf("%d\t",matrix[2][i]);           
    }
    printf("\n");
}