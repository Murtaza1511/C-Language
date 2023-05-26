//P(x)= a0 + a1x + a2x^2 + a3x^3 +...+anx^n
//P(x)= a0 + x(a1 + x(a2 +...+ x(an-2 + x(an-1 + xan))))
//n additions
//n multiplications
#include<stdio.h>
int main()
{
    int x,n,i;
    int coeff[20]; // maximum degree 19
    int value = 0;
    printf("Enter the polynomial degree and the value of x for which it has to evaluated");

    scanf("%d %d",&n,&x);

    for(i=0; i<=n; i++)
    {
        scanf("%d",&coeff[i]);
    }
    value = coeff[n];
    for(i=(n-1); i>=0; i--)
    {
        value = x*value + coeff[i];
    }

    printf("%d\n",value);
}