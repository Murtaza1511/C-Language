#include<stdio.h>

int main()
{
    char operator;
    int x, y;
    // +,-,*,/,%
    printf("Enter operator:\t");
    scanf("%c",&operator);
    
    printf("Enter x:\t");
    scanf("%d",&x);

    printf("Enter y:\t");
    scanf("%d",&y);

    


// We cannot put the operator scanf after y scanf, because scanf will 
// take enter as a input. If we want to run like that we can input
// 3+ to do operation or use getchar();

    

    switch(operator)
    {
        case '+':
        {
            printf("x+y= %d\n",x+y);   
            break;
        }
        case '-':
        {
            printf("x-y= %d\n",x-y);   
            break;
        }
        case '*':
        {
            printf("x*y= %d\n",x*y);   
            break;
        }
        case '/':
        {
            printf("x/y = %f\n",(x*1.0)/y);
            break;   
        }
        case '%':
        {
            printf("x%%y = %d\n",x%y);
            break;   
        }
        default:
        {
            printf("Enter valid operator\n");
            break;        
        }
    }
    return 0;
}