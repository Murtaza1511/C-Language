#include <stdio.h>
#include <string.h>
void main()
{
    char s[1000];
    scanf("%s",&s);
    int l = 0;
    int h = strlen(s)-1;

    while(h>1)
    {
        if(s[l] != s[h])
        {
            printf("NOT PALINDROME");
            break;
        }
        l++; h--;
    }
    if(h==1 || h<1)
    printf("PALINDROME");

}