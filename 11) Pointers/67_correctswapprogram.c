#include<stdio.h>
void swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
}
//We can use global variables in order to make swap function work without pointers but it is of
//no use