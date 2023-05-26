#include <stdio.h>

int main()
{
   int x=1,y=2,z=3,a=4,b=5;
   z = x + y; // valid
   //x + y = z;  invalid

   //float to int assignment the compiler will type cast it naturally 

   x = y = z = a+b; // Right to left evaluation happens

   x = x+10; // or we can write x += 10;

   printf("x = %d\n",x);
   printf("y = %d\n",y);
   printf("z = %d\n",z);
   printf("a = %d\n",a);
   printf("b = %d\n",b);   
   
}