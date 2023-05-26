// Pseudo F(n)= y+f(x-1,y) if x>1  //Complex recursive part
//            = y          otherwise // Base Case
#include<stdio.h>
int mult(int x, int y)
{
    if(x==1)
        return y;
    else
        return (y + mult(x-1,y));
}
int main()
{
    int num1,num2;
    printf("Enter two numbers to multiply");
    scanf("%d %d",&num1,&num2);
    int result = mult(num1,num2);
    printf("%dx%d=%d",num1,num2,result);

//If we don't write the the base case then it would be a run-time error and not a compile time
// error because of which it will lack memory
}