#include<stdio.h>
int main(int argc, char *argv[])
{
    int age=100;
    int height =172;
    printf("I am %d years old\n ",age);\
     // if we don't initialize and try to print it will 0 or  any invalid memory chunk also if we 
     // forget writing age same invalid memory chunk will be displayed also if we put argv which
     // is a pointer to pointer it will give warning as format specifier is of int but it
     // will also gives some large number, & whenever we get large numbers it is memory
     // If we don't use height it will give WARNING that unused variable
}