#include <stdio.h>
#include<string.h>
void mystrcpy(char *source, char *dest)
{
    while(*source)
    {
        *dest = *source; // If for example destination string has less size than source then 
        dest++;          // it will give you a segmentation fault or simply run with seg error
        source++;
    }
    *dest = '\0';
}
int main()
{
    char s1[20] ="This is my string";
    char s2[20];
    mystrcpy(s1,s2);
    printf("%s\n",s2);


    return 0;
}