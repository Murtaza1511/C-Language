#include<stdio.h>
int main()
{
    int range,i,num;
    printf("Enter the number till which prime has to be printed: ");
    scanf("%d",&range);
    // Why can't we declare flag outside loop?
    for(num=1; num<=range; num++)
    {
        int flag = 0;
        for(i=2; i<num; i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
            
        }

        if(flag==0)
        {
            printf("%d\n",num);
        }
    }
    return 0;

}