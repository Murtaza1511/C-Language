#include <stdio.h>
int main()
{
    int count;
    int *countPtr;

    count = 10;
    countPtr=&count;
    printf("count=%d\n",count);
    printf("count via countPtr=%d\n",*countPtr);
    printf("address of count=%p\n",&count);
    printf("value of countPtr=%x\n",countPtr);
}