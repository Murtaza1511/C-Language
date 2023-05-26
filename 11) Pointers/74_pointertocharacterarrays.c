#include<stdio.h>
// Cam we use datastructure char Names[3][11] it has a issue as if we wanna store larger names 
// we can't and memory will be wasted
void main()
{   // This is pointer to a character array
    char *Names[3]={"Sai","Lakshmi","Narsimhan"}; // These strings are stored in heap
    int i;
    for(i=0; i<3; i++)
    {
        printf("%s\n",Names[i]);// we can't use scanf because this is space for pointer not string
                                // we haven't allocated memory for strings although pointer
                                // points to a default location but it may be access outside
                                // the program scope so it may give seg fault
        printf("%c\n",*Names[i]);
    }
    printf("%c\n",Names[0][1]);
    Names[0][0]= 'M'; // It is not allowed as the character array are constant strings and we can't do any manipulations to it
                      // We can only access the elements of that strings
    // It is NOT like that the memory allocated in heap is NOT changeable
}