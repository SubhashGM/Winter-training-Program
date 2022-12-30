#include<stdio.h>
int sort_array(int a[],int n)
{
    int temp;
    for(int j=0;j<n-1;j++)
    {
    for(int i=0;i<n-1-j;i++)
    {
        if(a[i+1]<a[i])
        {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
    }}
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test)
    {
        int m,n,diff,difference,i,j,a[100];
        scanf("%d %d",&n,&m);
        diff=n-m;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        sort_array(a,n);
        int minsum=0,maxsum=0;
        for(i=0;i<diff;i++)
        {
            minsum+=a[i];
        }
        for(i=n-1;i>=n-diff;i--)
        {
              maxsum+=a[i];
        }
        difference=maxsum-minsum;
        printf("%d",difference);
        test--;
    }
}
