#include <stdio.h>

int main()
{
    int x , y;
    char op;

    printf("Input the operand\t"); scanf("%c",&op);

    while (!((op == 'q')|| (op == 'Q'))) // ((op != 'q')&& (op != 'Q'))
    // Here while determining condition we can do like that if we want to
    // quit the loop we will write a condition and then do its negation
    // here we can't use ((op != 'q')||(op != 'Q'))
    {
        printf("Input the first integer\t"); scanf("%d",&x);
        printf("Input the second integer\t"); scanf("%d",&y);
        switch(op)
        {
            case '+': printf("x+y = %d\n", x+y); break;
            case '%': printf("x mod y = %d\n",x%y); break;
            case '/': printf("x/y = %.2f\n",(x*0.1)/y); break;
            case 'q': ; break;
            default : printf("invalid operator\n"); break;
        }
        getchar(); printf("Input the operator\t"); scanf("%c",&op);
        // Ctrl + C to stop infinite loops
    }
}