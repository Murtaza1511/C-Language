// Array can have negative indices also if pointer is pointing in 4 element of array then
// 3rd indice is -1 , 2nd indice is -2 and so on

//Array has same datatype only
//Array size is fixed
//Array is in contiguous memory
#include<stdio.h>
int main()
{
    int count[] = {12,56,89}; // we will not define size only when we are explicitly initializing it first only
    int x,y;
    int arr[10] = {5};

    printf("%p\n",&x); //%p for pointer address in hexadecimal
    printf("%p\n",&y); // If we run it multiple times it may have diff output
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);

    printf("%ld\n",sizeof(arr));
    return 0;
}