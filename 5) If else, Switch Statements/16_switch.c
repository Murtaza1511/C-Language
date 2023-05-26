#include <stdio.h>

int main()
{
    char input;
    printf("Input a character:\t");
    scanf("%c",&input);

    switch(input)
    {
        case 'W':
        case 'w':// We can use curly braces if we want to use multiple comments
            printf("Attendance is below 85 %%\n");
            break;
// If we won't use break then it will execute all statements after one
// case is true.
        case 'A':
        case 'a': // By this way we can exploit missing break
            printf("Marks are between 90-100 %%");
            break;
        
        case 'B':
        case 'b':
            printf("Marks are between 80-90 %%");
            break;

        default: //default is optional
            printf("Invalid Character. Enter one of W, A, B");
    }
} 
// case 4+2: is  valid
// case 2.3: is not valid
// case : myInt is not valid 
// case "A": is not valid