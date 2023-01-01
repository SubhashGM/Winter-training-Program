#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int asum,arrsum=0,i,n,k,arr[100],temp,rem,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&arr[i]);
        printf("%d ",arr[i]);}
    for(i=0;i<n;i++)
    {
        k=0,sum=0;
        temp=arr[i];
        while(temp)
        {
            rem=temp%10;
            rem=abs(rem-5);
            sum=(rem*pow(10,k))+sum;
            k++;
            temp/=10;
        }
        arr[i]=sum;
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        asum=0;
        while(temp)
        {
            rem=temp%10;
            asum+=rem;
            temp/=10;
        }
        asum%=10;
        if(asum==0)
            asum=1;
        arr[i]=asum;
    }
    for(i=0;i<n;i++)
    {
        arrsum+=arr[i];
    }
    printf("%d",arrsum);
    // for(i=0;i<n;i++)
    //     printf("%d ",arr[i]);
    return 0;
}
