#include<stdio.h>
void swap(int *p1,int *p2)
{
    int *temp;
    temp=p1;
    p1=p2;
    p2=temp;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d %d",a,b);
    // Here the value of a and b won't be swapped but the pointers storing the addresses will be 
    // swapped
}