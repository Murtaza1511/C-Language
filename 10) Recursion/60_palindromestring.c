//Check as output is wrong
#include<stdio.h>
int palindrome_check(char str[],int start,int end)
{
    if(end-start==1 || start==end)
    {
        return 1;
    }
    else
    {
        if(str[start]==str[end])
        {
            return palindrome_check(str,start+1,end-1); 
        }
        else
        {
            return 0;
        }
    }
    

}
int main()
{
    char str[10];
    scanf("%s",&str);
    int n= sizeof(str);
     
    if(palindrome_check(str,0,n-1))
    {
        printf("Palindrome");
    }
        
    else
    {
        printf("Not a Palindrome");
    }
}