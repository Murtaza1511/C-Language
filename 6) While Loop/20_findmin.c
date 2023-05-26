#include <stdio.h>
int main()
{
    //takes input n -- which is an integer
    //accepts n integers as inputs and outputs the min of these integers
   
    int n; int currInt;
    int min;
    int a;
    scanf("%d",&n);

    a=1;
    while(a <= n)
    {
        scanf("%d",&currInt); //takes in the first integer
        if(a==1)
        {
           min = currInt; //initialize min to be currInt 
        }
        if(currInt < min)
        {
            min = currInt;
        }
        a++;
    }
    printf("min = %d\n",min);

}