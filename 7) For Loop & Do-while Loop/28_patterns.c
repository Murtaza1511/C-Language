#include<stdio.h>
int main()
{
    printf("First Pattern\n");
    for(int i=1; i<=4; i++)// Outer for loop for rows
    {
        for(int j=1; j<=8; j++) //Inner for loop for columns
        {
            printf("*");
        }
        printf("\n");
    }

    printf("Second Pattern\n");
    for(int a=1; a<=4; a++)
    {
        for(int b=1;b<=8;b++) // or we can go from 1 to <= (2*a)
        {
            if(b<=(2*a))
            {
                printf("*");
            }

        }
        printf("\n");
    }

    return 0;
}