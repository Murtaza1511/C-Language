#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter x and y");
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        z=x;
    }
    else
    {
        z=y;
    }
    int gcd =1;
    for(int i =1; i<=z; i++) // All the statements inside for loop are optional
    {
        if((x%i==0)&&(y%i==0))// If i doesn't divides x then there is no need to check whether i divides y or not
        {
            gcd = i;
        }
    }
    printf("gcd of x and y is %d\n",gcd);
}
//continue; skips to next iteration of the loop and skips the remaining body of loop