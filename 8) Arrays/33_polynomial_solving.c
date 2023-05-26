//P(x)= a0 + a1x + a2x^2 +...+ anx^n
// n is the degree of the polynomial
//user provides n coefficients in an array
// User provide x for which polynomial has to evaluated

#include<stdio.h>
#include<math.h>
int main()
{
    int x,n,i;
    int coeff[20]; // maximum degree 19
    int value = 0;
    printf("Enter the polynomial degree and the value of x for which it has to evaluated");

    scanf("%d %d",&n,&x);
    // We can also do int coeff[n+1];

    for(i=0; i<=n; i++)
    {
        scanf("%d",&coeff[i]);
        value = value + coeff[i] * pow(x,i);
     // Multiplications = n*(n+1)/2 {n+(n-1)+(n-2)+...+2+1}
     // Can we decrease the number of multiplication to decrease the execution time?
     // We need to first do int factor = 1; outside the loop
     //And instead of pow function we can do value = value + coeff[i] * factor;
     // factor = factor *x; and it is time efficient as it does 2(n+1) multiplications

    }
    printf("%d\n",value);

}