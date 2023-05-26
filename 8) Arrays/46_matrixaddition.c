#include<stdio.h>
#define N1 3
#define N2 2
void main()
{
    int A[N1][N2]={1,2,3,4,5,6};
    int B[N1][N2]={6,5,4,3,2,1};
    int C[N1][N2];
    int i,j;
    
    for(i=0; i<N1; i++)
    {
        for(j=0; j<N2; j++)
        {
            C[i][j]= B[i][j]+ A[i][j];
        }
    }
    for(i=0; i<N1; i++)
    {
        for(j=0; j<N2; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
    
}