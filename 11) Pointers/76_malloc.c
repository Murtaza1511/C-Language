// malloc- memory allocator is a function that allocates memory to the program and returns a pointer
// to that memory
// int *ptr;
// ptr = (int *) malloc(sizeof(int)); // we don't give no of bytes(input) as absolute value USUALLY we give as function
// malloc returns a void pointer which we can typecast according to our wish and stores it in heap
// Memory obtained using malloc is destroyed only when program is terminated or if it is freed
#include<stdio.h>
#include<stdlib.h> // malloc is in stdlib.h
#include<string.h>
int main()
{
    char *Names[3];
    char temp[100];
    int i;
    for(i=0; i<3; i++)
    {
        scanf("%s",temp);
        Names[i]=(char *)malloc(strlen(temp)+1);
        strcpy(Names[i], temp);
        printf("%s\n", Names[i]);
    }
    for(i=0; i<3; i++)
    {
        printf("%s\n", Names[i]);
    }
}