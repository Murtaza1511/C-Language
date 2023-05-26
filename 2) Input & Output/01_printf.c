#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("The character is : %c\n", ch);

    float f1 = 23.4290;
    printf("The value of f1 : %f\n",f1);
    printf("The value of f1 : %.3f\n",f1);// float has 7 decimal precision while double has 15 decimal precision
    printf("The value of f1 : %20f\n",f1); // total 20 character in O/P including the float no. and space(pehla space)
    //But if we tell the printf that print less than the actual number by upper format then it won't do so
    printf("The value of f1 in exponent : %e\n ",f1);

    int z = 20;
    printf("The value of z in decimal is : %d\n",z);
    printf("The value of z in octal is : %o\n",z);
    printf("The value of z in hexa-decimal is : %x\n",z);
    

    
    return 0;
    // The expected value and variables should be equal in number
    // int : %d
    // float : %f
    // printf("%w.pC",x)
    // w is width, p is precision, C is conversion character
    /*d: integer
      f: float
      c: character
      x: hexademical
      o: octal
      u: unsigned int
      e: real decimal in exponent form
    */

    

}