#include<stdio.h>
int main()
{
    int i,j,n,start=0,total=0,tank=0;
    scanf("%d",&n);
    int gas[n],cost[n];
    for(i=0;i<n;i++)
        scanf("%d",&gas[i]);
    for(i=0;i<n;i++)
        scanf("%d",&cost[i]);
    for(i=0;i<n;i++)
    {
        tank+=gas[i]-cost[i];
        if(tank<0)
        {
            start=i+1;
            total+=tank;
            tank=0;
        }
    }
      if(total+tank<0)
            printf("-1");
        else
            printf("%d",start);
    return 0;
}
