//Task: Search for a key in the array
//Here n is the array length
//Example of linear search
#include<stdio.h>
#include<string.h>
int main()
{
    int A[10] = {15,8,3,12,30,7,9,17,32,19};
    int key;
    int n = sizeof(A)/sizeof(int);
    printf("Enter the key which you want to search:\t");
    scanf("%d",&key);

    for(int i=0; i<n; i++) //We need to go to n-1 as array index is till n-1
    {
        if(A[i] == key)//This only tells that key is present and not that how much time it occurs
        {
            printf("Found %d at index %d\n",key,i);
            break;
            //Usually n comparisons are done in linear search
            //Also if key is not present it quits silently and NOT print that key isn't present 
        }
        //Let say we are charged for every comparison operator we use can we reduce it?
        //No! if we don't do any changes in input
        //Yes! if input is sorted
        //Real life examples of searching in a sorted array are dictionary, telephone directories
    }
}