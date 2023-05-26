#include <stdio.h>
void main()
{
    char s[1000],i;
    scanf("%s",&s);
    for(i=0; s[i] != '\0'; ++i);// we can also test it with 0 instead of NULL as ascii value of NULL is zero
    printf("Length:%d",i);
}