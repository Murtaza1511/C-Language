#include <stdio.h>

int main()
{
    int a;
    printf("Enter a:\n");
    scanf("%d",&a);
    printf("0 then Even Number\n1 then Odd Number\n");
    printf("%d",a%2);
}