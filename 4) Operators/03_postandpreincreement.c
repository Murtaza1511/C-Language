#include <stdio.h>

int main()
{
    int x,y;
    int n = 10;

    x = n++;
    y = ++n;

    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("n = %d\n",n);
    // applicable to variable only
    // generally used in loop indices increement

    char ch = 'A';
    char a;
    a = ++ch;
    printf("a = %c\n",a);
}