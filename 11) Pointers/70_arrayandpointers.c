// &arr[0] == arr
// &arr[1] == (arr+1)
// &arr[2] == (arr+2)

// arr[0] == *arr
// arr[1] == *(arr+1)
#include<stdio.h>
int main()
{
    int A[10];
    int *ptr = A;
    for(int i=0; i<10; i++)
    {
        A[i]=i;
    }
    printf("A[2]=%d is equal to *(ptr+2)=%d\n",A[2],*(ptr+2));
    printf("*(A+2)=%d is equal to ptr[2]=%d\n",*(A+2),ptr[2]);
    //ptr++ can be done to move the pointer
    // formula is base address +(offset * size of datatype)
    //A=A+1 is syntactically incorrect as array name is constant pointer although A+1 is valid
}