//Syntax means how we write in a language
//Semantic means its behaviour
// euclid's gcd using do while the answer will be in x an not y
#include<stdio.h>
int main()
{
    int x,y,temp;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        temp=x; x=y; y=temp;
    }
    do
    {
        //Assume x >= y
        x = x%y;
        temp =x;
        x=y;
        y=temp;

    }while(y != 0);
    printf("gcd of input numbers is %d\n",x);
    return 0;

}
