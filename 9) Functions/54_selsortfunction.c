#include<stdio.h>

int getMaxIndex(int A[],int low, int high)
{
    int maxIndex = low;
    for(int j =low+1; j<=high; j++)
    {
        if(A[j]>A[maxIndex])
        {
            maxIndex=j;
        }
    }

    printf("maxIndex = %d\n",maxIndex);
    return maxIndex;
}

void swapArr(int A[], int index1, int index2)
{
    int temp = A[index1];
    A[index1]=A[index2];
    A[index2]=temp;
}

int main()
{
    int arr[10]= {25,7,9,30,44,8,-12,7,8,10};
    
    for(int i=0; i<10; i++)
    {
        int mIndex = getMaxIndex(arr,i,9);
        swapArr(arr,mIndex,i);
    }
    for(int i=0; i<10; i++)
    {
        printf("%d\t",arr[i]);
    }
}