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
    }
    }
    return 0;
}
int main()
{
    int m,n,i,mis[1000],org[1000],a[100];
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&mis[i]);
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&org[i]);
    sort_array(mis,m);
    sort_array(org,n);
    int M=0,N=0;
    i=0;
    while(N<n){
        if(mis[M]==org[N])
            M++;
        else{
            a[i++]=mis[M];
        }
        N++;
    }
    for(int j=0;j<i;j++)
        {
            for(int k=j+1;k<i;k++)
            {

                if(a[j]==a[k])
                {
                    a[k]=0;
                }
            }
        }
        for (int k = 0; k<i; k++)
     {
         if(a[k]!=0)
     {
          printf("%d ",a[k]);
     }
     }
}
