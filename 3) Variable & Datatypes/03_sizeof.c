#include <stdio.h>

int main()
{
    char myChar;
    int myInt;
    short int x;
    printf("short int : # of bytes = %d\n",sizeof(x));
    printf("char : # of bytes = %d \n",sizeof(myChar));
    printf("int : # of bytes = %ld\n", sizeof(myInt)); 
    // If we use ld means long unsigned int then no warnings will occur in old systems and compilers
    printf("float : # of bytes = %d\n",sizeof(float));
}