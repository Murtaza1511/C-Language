#include<stdio.h>
int count_digits(int n)
{
    if(n/10 == 0)
        return 1;
    else 
        return 1+count_digits(n/10);
}
int main()
{
    int num;
    printf("Enter the int whose digits has to be counted");
    scanf("%d",&num);
    printf("%d",count_digits(num));
}