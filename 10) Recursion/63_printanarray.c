#include<stdio.h>
int arr[5]={1,2,3,34,5};
void print_L2R(int arr[],int start,int end)
{
    if(start<=end)
    {
        printf("%d\t",arr[start]);
        print_L2R(arr,start+1,end);
    }
}
void print_desirednum(int arr[],int n)// Here n is the count of numbers we want to print
{
    if(n==0)
        return;

    printf("%d\t",arr[0]);  // If we want to print R2L then we need to only interchange 16 and 17 line 
    print_desirednum(arr+1,n-1);
    
}
int main()
{
    print_L2R(arr,0,4);
    int n;
    printf("Enter total numbers which we want to print of the array");
    scanf("%d",&n);
    print_desirednum(arr,n);
}