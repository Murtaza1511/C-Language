#include <stdio.h>
int global; // global variable whose scope is entire program also in any other UDF
int main()
{
    int local; // local variable which can be accessed in the function it is declared(i.e main)
     
    global =1; 
    local =2;
    {
        int very_local; // very local can be accessed only in this block of code enclosed with braces
        very_local =global +local;
    }
    // We ended very_local block
}