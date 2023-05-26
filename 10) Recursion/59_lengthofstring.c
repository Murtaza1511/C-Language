#include<stdio.h>
int rec_len(char str[])
{
    if(str[0]==0)// As we are doing str+1 so for that address str[0] is that first index
        return 0;
    else 
        return (1+rec_len(str+1));// here str+1 means we went to 1 index of the string
}
int main()
{
    char arr[10]="Kolpinomi";
    int len=rec_len(arr);
    printf("The Length of the string is:%d",len);
}