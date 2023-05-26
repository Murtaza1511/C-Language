#include<stdio.h>
int FindSum(int , int); // Declaring a function(Prototype)
int main()
{
    int var1 = 10;
    int var2 = 20;
    int var3, var4;
    var3= FindSum(var1,var2); // Function calling
    var4= FindSum(var3,var2);
    printf("%d\n",var3);
    printf("%d\n",var4);
    return 0;
}
// Function Prototype tells about return type, function name and arguments and their types
int FindSum(int a, int b)// Defining a function
{// If we don't define the functions and try to compile then it will show an error 'undefined reference'
  // Although we can solve it by writing 'gcc -c name.c' which will create a name.o object file
  // which can be included in any program and program can be runned  
    int c=a*b;
    return c;
}
