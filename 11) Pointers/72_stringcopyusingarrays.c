#include<stdio.h>
#include<string.h>
void mystrcpy(char source[],char dest[])
{
    int len= strlen(source);
    int i;
    for(i=0; i<len; i++)
    {
        dest[i]=source[i];
    }
    dest[i]='\0';

}
int main()
{
    char s1[20]="This is my string";
    char s2[20];
    
    mystrcpy(s1,s2);
    printf("%s\n",s2);
}