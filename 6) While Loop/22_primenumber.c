// Only 1 and the number itself is the divisor
// We go from 2 to n-1 we can also go till n/2 or sqrt n will also work
#include <stdio.h>
int main()
{
    int num,c=2,flag=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(c<num)
    {
        if(num%c==0)
        {
            flag++;
            break;
        }
        c++;
    }
    if(flag==0)
    printf("Number is prime");
    else if(flag!=0)
    printf("Number isn't prime");
    return 0;
}