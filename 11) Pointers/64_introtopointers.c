#include<stdio.h>
int main()
{
    char *ptr1;
    int *ptr2;
    float *ptr3;
    printf("%ld %ld %ld\n",sizeof(ptr1),sizeof(ptr2),sizeof(ptr3));
    
    // Therefore any pointer range does not depends on the type of pointer its has default 4bytes memory
    // '*' --> Dereferencing operator

    int x,y,*ptr; //If we don't initialize pointers we get segmentation fault
    x=10;
    ptr=&x;
    y=*ptr;
    x++;
    printf("x=%d,y=%d,*ptr=%d\n",x,y,*ptr);
    ptr=&y;
    (*ptr)++;
    printf("x=%d,y=%d,*ptr=%d",x,y,*ptr);
    return 0;// After return 0; any statements won't be executed
    
    //Address of a variable is called its l-value as left hand side of assignment opeartor
    // Value of a variable is called its r-value as right hand side of assignment operator it is 
    // placed and it may change during a program
    
}