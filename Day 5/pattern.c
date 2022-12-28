#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],x,count=0;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=1)
        {
            if(a[i-1]==0&&a[i+1]==0)
                count++;
        }
    }
    if(count==x)
        printf("true");
    else printf("false");
}
