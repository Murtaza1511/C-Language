//WAP to take x and y from user and swap it
#include <stdio.h>

int main()
{
    int x,y;

    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);

    y = y+x;// or by temp variable
    x = y-x;// if we want to swap two char then temp method is more convenient although this will also work
    y = y-x;// cannot be used to swap two strings

    printf("x = %d\n",x);
    printf("y = %d\n",y);

    int c1 = 'a';
    int c2 = '$';
    int temp;
    temp = c1;
    c1 = c2;
    c2 = temp;

    printf("c1 = %c\n",c1);
    printf("c2 = %c\n",c2);

    return 0;

}