/*
Variable naming rules:-
1) Made up of letters, digits and underscore.
2) Cannot contain any other special symbol.
3) can start with either letter or underscore.
4) Are case sensitive.

valid names : age, height, _ii
allowed but undesirable : a1b2, i_j, AgE, Age
not allowed : %age, 1weight, &width, char, for
*/
#include <stdio.h>
int main()
{
    int age; char myChar; float f1; //declaration

    age = 10; myChar = 'd'; f1 = 3.141; // intialization or modification

    printf("%d %c %f",age,myChar,f1);
     
    // Be careful with assignment operator right side value will be stored in left side variable



}