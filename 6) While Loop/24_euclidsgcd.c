#include<stdio.h>
int main()
{
    //IDEA 2 (Euclid's Algorithm is an time efficient algorithm)
    //If y divides x we are done
    // Else there is a smaller problem to solve
    //gcd(x,y) = gcd(x-y,y)
    // and also gcd(x,y) = gcd(y,x)

    int x,y,temp;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        temp=x; x=y; y=temp;
    }
    //Assume x>=y
    while(x%y != 0){
        x = x%y;
        temp=x; x=y; y=temp;
    }
    printf("gcd of input number is %d\n",y);

    return 0;
// gcd of non zero number and zero is that non zero number itself
}
