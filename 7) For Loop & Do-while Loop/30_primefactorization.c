#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2; i<=n; i++)
    {
        int count = 0; // This should be included in the for loop because otherwise count will
        //have other value because of previous iterations
        while(n%i==0)
        {
            count++;
            n = n/i;
        }
        if(count>0)
        {
            printf("%d %d\n",i,count);
        }

    }
//We can also use isPrime(x) function in this example.
}
