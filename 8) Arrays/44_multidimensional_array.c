// There can be N-dimensional arrays
// 2D arrays are stored in form of rows majoring order
/* 1 2 3 4
   5 6 7 8 
   9 10 11 12
       |
   1 2 3 4 5 6 7 8 9 10 11 12  // This way it is stored in memory contiguously first row0, then row1...
*/
#include<stdio.h>
void main()
{
    int a[3][4] = {
        {1,2,3,4}, // If we write fewer elements in a row then it will initialize to 0
        {5,6,7,8},
        {9,10,11,12}
    };
    int i,j;
    for(i=0; i<3 ; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int b[2][5] ={ // Also we can avoid writing rows number as it will automatically calculate by our static input 
        1,2,3,4,5,6,7,8,9,10 // we can aslo initialize like this without using nested braces
    }
}