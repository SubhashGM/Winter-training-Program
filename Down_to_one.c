#include<stdio.h>
#define max(X,Y) X>Y?X:Y
int isPrime(int n)
{
    int c=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
int main()
{
    int Q;
    scanf("%d",&Q);
    while(Q)
    {
        int n,i,count=0,a,maxi=0;
        scanf("%d",&n);
        while(n--)
        {
            if(!isPrime(n))
            {
                for(i=2;i<n;i++)
                {
                    if(n%i==0)
                    {
                        a=n/i;
                        maxi=max(i,a);

                    }
                    if(maxi!=0)
                        break;
                }
            n-=maxi;
            count++;
        }
            else
            {
                n--;
                count++;
            }
        }
        printf("%d\n",count);
     Q--;
 }
}
