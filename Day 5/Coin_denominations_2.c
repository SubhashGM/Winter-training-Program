//Coin denomination using Greedy Algorithm
#include<stdio.h>
int main()
{
    int a[]={100,50,20,10,5,2,1};
    int n,div,count=0,i,rem;
    scanf("%d",&n);
    if(n==0)
        printf("0");
    else
    {
        if(a[i]<=count)
        {
        for(i=0;i<7;i++)
        {

            div/=n;
            count+=div;
            n%=a[i];
            if(n<a[i+1])
                continue;
        }
        }
    }
    printf("%d",count);
    return 0;
}
