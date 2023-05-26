#include<stdio.h>
int main()
{
    //IDEA 1
    // Let z be min of x and y
    // Go from i =1 to z
    //   check if i divides both x and y
    //   output largest i as gcd 

    int x,y,z,i=1,gcd=1;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);

    if(x<y)
    {
        z=x;
    }
    else
    z=y;

    while(i<=z)
    {
        if((x%i==0)&&(y%i==0))
        {
            gcd = i;
        }
        i++;
    }
    printf("GCD is %d\n",gcd);

}