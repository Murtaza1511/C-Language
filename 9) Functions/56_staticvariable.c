//By default all variables has auto(automatic) as their prefix
//Static variable is a variable whose lifetime is whole and scope is till that function only
// Also it is initialized only one in the program
#include <stdio.h>
void DoSomething()
{
    static int x=5; // If it was not a static variable then it would get initialized after every 
    {               // iteration and we would get same output 6 and 7
        static int y=6;
        x++;
        y++;
        printf("x=%d\ty=%d\n",x,y);
    }
}
int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        DoSomething();
    }
}
// We will use extern prefix in case we want to access any function or variable in different files
