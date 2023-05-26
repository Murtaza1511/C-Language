// Task: Search for key in a sorted array
// Binary Search: Check the middle element if found break
// Else decide which part of the array is relevant and repeat , can be done as array is sorted
// It is called binary search as we dividing input into two halves
#include<stdio.h>
int main()
{
    int A[10] = {32,30,19,17,15,12,9,8,7,3};
    int n, key;
    n = sizeof(A)/sizeof(int);// length of array
    printf("Enter the key which you want to search");
    scanf("%d",&key);
    int start = 0;
    int end = n-1;
    while(start <= end )// If we start < end then we will miss one corner case
    {
        int mid = (start + end)/2   ;
        if(A[mid]==key)
        {
            printf("Found at %d ",mid);
            break;
        }
        if(A[mid]>key)
        {
            start = mid - 1   ;
        }
        else 
        {
            end =mid +1   ;
        }
    }
    return 0;
}