#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char ch;
    scanf("%c",&ch);
    printf("%c\n",ch);
    char s[100];
    scanf("%s",&s);
    printf("%s\n",s);
    scanf("\n");// This is done because otherwise '\n' from previous scanf will be read by this scanf
    char sen[100];
    scanf("%[^\n]%*c",sen);// This tells that take input until '\n' and * means discard as soon as '\n' comes
    printf("%s",sen);
    return 0;
}