// This is multiplication of square matrix but we can also do A.B where A's columns and B's rows 
// are same
//Transpose multiplication is a very deep topic of research

#include<stdio.h>
#define N 3
void main()
{
    int A[N][N]={1,2,3,4,5,6,7,8,9};
    int B[N][N]={1,2,3,4,5,6,7,8,9};
    int C[N][N];
    int i,j,k,sum;

    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            sum=0;
            for(k=0; k<N; k++)
            {
                sum = sum + A[i][k] * B[k][i];
            }
            C[i][j] = sum;
        }
    }
    for(i=0; i<N; i++)
    {
        for(j=0; j<N; j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}