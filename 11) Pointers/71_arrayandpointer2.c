#include<stdio.h>
int main()
{
    int A[10]={12,3,4,5,8,16,7,88,19,10};
    int *ptr = A;
    int i;

    for(i=0; i<10; i++)
    {
        printf("%d\t",A[i]);
        printf("%d\t",*(ptr+i));
        printf("%d\n",*ptr+i);
    }
    return 0;

}