// In this example we are going to compute a histogram of marks of student in cia 1
// How much students got 0, 1, 2, and so on

#include<stdio.h>
int main()
{
    const int MAX_MARKS = 30; // const means constant
    const int NUM_STUDENTS = 64;
    int marks_count[MAX_MARKS+1];

    int i, curr_marks;

    for(i=0; i<=MAX_MARKS; i++)
    {
        marks_count[i] = 0;
    }
    for(i=1; i<=NUM_STUDENTS; i++)
    {
        printf("Enter the marks for Roll Number %d\t",i);
        scanf("%d",&curr_marks);
        if(curr_marks>=0 &&curr_marks<=MAX_MARKS)// we can also use continue; here
        {// By using we will avoid segmentation fault if user input out of array range but some entries may get skipped
            marks_count[curr_marks]++;
        }
    }
    for(i=0; i<=MAX_MARKS; i++) // A good programming practice is that we should variables instead of constants
    {
        printf("%2d   %2d \t",i,marks_count[i]);
        for(int j =1; j<=marks_count[i];j++)
            printf("*");

        printf("\n");
    }

    return 0;
}