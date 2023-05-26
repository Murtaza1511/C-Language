// Relational operators : <, >, <=, >=, ==, !=
// If the statement is true then it will return 1 otherwise 0
//Logical Operators: &&(AND), ||(OR), !(NOT) 

#include <stdio.h>
int main()
{
    int a,b,c;
    int min;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);

    min = a;
    if(b<min)
    {
        min = b;
    }
    if(c<min)
    {
        min = c;
    }
    printf("%d\n",min);


}