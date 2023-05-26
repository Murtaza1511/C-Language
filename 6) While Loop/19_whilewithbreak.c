# include <stdio.h>
int main()
{
    int x,y;
    char op;
    while(1)
    {
        printf("Input the operator \t"); scanf("%c",&op);
        if(op == 'q' || op == 'Q'){
            break; //break; will terminate the loop and exit; will terminate the program completely
        }
        printf("Input the first integer \t"); scanf("%d",&x);
        printf("Input the second integer \t"); scanf("%d",&y);
        switch(op)
        {
            case '+': printf("x+y = %d\n", x+y); break;
            //other cases
        }
        getchar();
    }
}