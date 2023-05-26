#include<stdio.h>

void replace(char s[10])// As C supports pass by value it should output 'MathS Maths' but it outputs
{// 'MathS MathS' because as array points to a base address it behaves as a pointer and so
    int i=0;  // pass by reference occurs
    while(s[i]!= 0) // We can pass argument like char s[] without defining the size
    {// Also if we try to access invalid element or size greater than the actual array then we get 
    // Segmentation fault
        if(s[i] == 's') // And typically for int array we should define the size of the argument
            s[i]='S';// as otherwise the compiler won't know where to stop
        
        i++;
    }
    printf("%s\n",s);
}

int main()
{
    char arr[10]="Maths";
    replace(arr);

    printf("%s\n",arr);
}