#include<stdio.h>
int g=10;
int main()
{
    int g=20;
    printf("%d\n",g);//Here the global variable is masked by local variable as the nearest 
    return 0;        // variable has high preference
}
char* mycopy(char input[])
{
    char str[100];
    //code to copy
    //input to str
    return str;
}
//This is incorrect 
//str is local to mycopy 
// its ADDRESS should NOT be passed 
// We can't do it as it is stored in STACK and gets removed as soon as program ends
// While we can do it by using malloc which will store it in heap