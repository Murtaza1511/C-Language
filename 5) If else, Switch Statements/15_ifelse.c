#include <stdio.h>
// W for low attendance
// A for marks 90-100
// B for marks 80-90

int main()
{
    char input;
    printf("Input a character\t");
    scanf("%c",&input);
    if(input == 'W' || input == 'A' || input == 'B')
 // Precedence of '==' is higher than '||'
 // Here short circuiting occurs if the first expression is evaluated to
 // true for the first if ,the other won't be checked also
    {
    if(input == 'W')
// input = 'W' written then it will be true as it is not 0
// So to avoid these types of errors it is a good practice to write
//'W' == input so if we have put '=' then the compiler will not allow it
    {
        printf("Attendance is below 75%%\n");
    }
    if(input == 'A')
    {
        printf("Marks are between 90-100 %%\n");
    }
    if(input == 'B')
    {
        printf("Marks are between 80-90 %%\n");
    }
    }
    else
    {   
        printf("Invalid character. Enter W ,A or B\n");
    }
    return 0;
}

