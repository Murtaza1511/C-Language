#include <stdio.h>

int main()
{
    short int x = 10;
    short int y = 50000;
    printf("size of short int %lu\n",sizeof(x));\
    printf("x = %d\n",x);
    printf("y = %d\n",y); // 50000 is out of range so another int will be printed
    return 0;
}