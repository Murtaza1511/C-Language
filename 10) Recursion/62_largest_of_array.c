#include<stdio.h>
 int arr[5]={1,2,3,4,5};
int deepmax(int i,int n) //First recursive way from 2 to n-1 max find and compare with 1st element
{
    if(i==n) // i is start and n is end
        return arr[i];
    int l;
    l=deepmax(i+1,n);
    if(arr[i]>l)
        return arr[i];
    else
        return l;
        
}
int shallowmax(int i,int j)// Second way in we divide array in two parts and the max of both parts are compared
{
    if(i==j)
        return arr[i];
    int l1,l2;
    l1=shallowmax(i,(i+j)/2);
    l2=shallowmax((i+j)/2+1,j);
    if(l1>l2)
        return l1;
    else
        return l2;
}
int main()
{
   
    printf("%d\n",deepmax(0,4));
    printf("%d\n",shallowmax(0,4));
//deepmax because it will have very deep stack and so large array it would give segemntation
// fault as we will run out of memory
}











