#include<stdio.h>
int FindSum(int, int); // If we define function here itself and try to access v1 it will give an error
int v1=10;
int main()
{
    int v2=20;
    {
        int v3;
        v3= FindSum(v1,v2);
        printf("%d\n",v3);
    }
    float v3 =100;
    printf("%.3f\n",v3);
    return 0;
}

int FindSum(int a, int b)
{
    int c=a+b;
    printf("%d\n",v1);
    return c;
}