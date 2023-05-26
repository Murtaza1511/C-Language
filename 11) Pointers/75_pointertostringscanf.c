#include<stdio.h>
int main()
{
    char *Names;
    char temp[100];
    int i;
    
    for(i=0; i<3; i++)
    {
        scanf("%s",&temp);
        Names[i]=temp; // This is syntactically correct but won't gives us desired answer as the 
                       // all the pointers to string will point to same temp and only last inputed
                       // strings will be there as other strings will be overwritted
        printf("%s\n",Names[i]);
    }
    for(i=0; i<3; i++)
    {
        printf("%s\n",Names[i]);// Names[i] excluding star as array is a pointer which points to 0 
    }
}