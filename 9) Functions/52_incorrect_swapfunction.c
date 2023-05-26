#include<stdio.h>
void swap(int a, int b)// If instead of int a and b we use int x and y then also it is incorrect
{// because x and y of swap function will be swapped which will be erased as soon as program terminates
    int temp=a;
    a = b;
    b = temp;
    return;
}
void main()
{
    int x=20;
    int y=10;
    swap(x,y); // This won't swap x and y while it would swap a and b but they are inaccessible 
    //outside swap function
    // As variables are passed by value in C always(means a copy of x and y is given to a and b)
    // If we need to write correctly this program we need pointers
    printf("x=%d\ty=%d",x,y);
}