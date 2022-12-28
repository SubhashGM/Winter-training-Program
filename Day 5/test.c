#include<stdio.h>
int main()
{
    int max,p,q,count=0,i,j;
    scanf("%d",&max);
    int x[2*max];
    for(i=0;i<2*max;i++)
        x[i]=0;
     scanf("%d",&p);
    for(i=0;i<p;i++)
        scanf("%d",&x[i]);
    scanf("%d",&q);
    for(i=p;i<q;i++)
        scanf("%d",&x[i]);
    for(i=1;i<=max;i++)
    {
        for(j=0;j<(p+q);j++)
        {
            if(x[j]==i)
               {
                   count++;
                   break;
               }
        }
    }
    if(count!=max)
        printf("I wanna be the Guy");
    else
        printf("Oh, my Keyboard");
    return 0;
}
