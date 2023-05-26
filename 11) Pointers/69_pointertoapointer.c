#include<stdio.h>
int main()
{
    int var=786;
    int *ptr2;
    int **ptr1;
    ptr2=&var;
    ptr1=&ptr2;
    printf("var=%d, ptr1=%d, ptr2=%d\n",var,ptr1,ptr2);
    printf("Add of var=%d, Add of ptr1=%d,Add of ptr2=%d\n",&var,&ptr1,&ptr2);
    printf("ptr1=%d, Add of ptr2=%d\n",ptr1,&ptr2);
    printf("var=%d, value of *ptr2=%d, value of **ptr1=%d\n",var,*ptr2,**ptr1);
    printf("*ptr1=%d\n",*ptr1);
    }