//Pseudo F(n)= n*f(n-1) if n>1
//           = 1 otherwise
#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return (n* fact(n-1));
}
int main()
{
    int num;
    printf("Enter the number whose factorial you want:");
    scanf("%d",&num);
    int x = fact(num);
    printf("The Factorial of %d is %d",num,x);
}
