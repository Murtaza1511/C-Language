// .Character grids are often used in crossword puzzles
// .We can access a particular element of grid but can't access a complete character grid 
// unless it is initialized with NULL after every row
// .If we are asked to find a word in grid we can do so in row but if we want to find it in
// column then we need to first find its transpose

#include<stdio.h>
void main()
{
    char grid[5][5]={
        {'c','a','t','t','y'},
        {'c','c','s','e','p'},
        {'e','s','c','e','l'},
        {'s','e','e','s','e'},
        {'e','a','p','c','s'}
    };
    char gridT[5][5];

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            gridT[i][j]=grid[j][i];
        }
    }
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%c ",gridT[i][j]);
        }
        printf("\n");
    }
}