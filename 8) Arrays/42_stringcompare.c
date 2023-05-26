// First we will find length of both the strings and if they are same the we will simply tell
// strings are different and if the length is same then we will see whether every elements
// of both strings are exact same case sensitive wise also
#include <stdio.h>
void main()
{
    char a[100], b[100];
    printf("Enter string a and b");
    scanf("%s %s",&a,&b);
    int i = 0;

    while(a[i]==b[i])// If we keep only this while condition then it will become an infinite loop
    {                // as if strings are same then null character would be also same
        if(a[i] == '\0' || b[i] == '\0')
        {
            break;
        }
        i++;
    }
    
    if(a[i]=='\0' && b[i]=='\0')
        printf("SAME");
    else
        printf("NOT SAME");
}