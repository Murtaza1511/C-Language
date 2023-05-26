#include <stdio.h>
int main()
{
    int currInt;
    int min;

    scanf("%d",&currInt);
    min = currInt;
    while(currInt >= 0)
    {
        scanf("%d",&currInt);
        if(currInt < 0) break; //It will terminate the loop
        // If we don't write the above statement then negative integer
        // will be stored in min

        if(currInt < min)
        {
            min = currInt;
        }
        //or we can bring that scanf down of if statement which will do the same.
        
    }
    if(min>=0){ // We need to do this otherwise if we input first number
    // as -ve then it will be printed to avoid that we keep this check

    printf("min = %d\n",min);
    }
}
