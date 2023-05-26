#include<stdio.h>
#include<string.h>
int main()
{
    char name[20] = "Avani kumar";// If we want to store k characters then array length should be k+1 ideally 
    char name1[20] = {'A','V','A','N','I'};
    // If in the upper case we explicitly initialize the 6 element then we will not be able to
    // printf it via %s but will be able to do it via explicit %c printing
    char name2[20];
    printf("Enter name2");
    scanf("%s",name2); // We need not use & as array implicitly has base address stored in it
    // We can't get name with space via scanf we need to use gets()
    // We can initialize a char array explicitly after declaration
    // char name[20];
    // name = "AVANI"; Incorrect
    
    return 0;
}