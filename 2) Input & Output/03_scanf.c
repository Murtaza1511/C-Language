#include <stdio.h>

int main()
{
    int z; // declaration
    scanf("%d",&z); // & means address
    // If & is not written then segmentation fault will occur as any 
    //other address the value will be stored or 0 will be return in printf

    printf("value input = %d",z);
    return 0;
}