#include<stdio.h>
#include<math.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test)
    {
        int n,a[20],i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]==-1)
            {
                if((a[i-1]+a[i+1])%2==0)
                {
                    a[i]=abs(a[i-1]-a[i+1]);
                }
                else if(((a[i-1]+a[i+1])%2==1))
                    a[i]=(a[i-1]+a[i+1])/2;
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=1)
                a[i]-=1;
        }
        printf("->");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
        printf("\n");
        test--;
    }
}
