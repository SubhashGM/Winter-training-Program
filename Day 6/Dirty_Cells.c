#include<stdio.h>
#define max(a,b) a>b?a:b
int maximum(int a,int b,int c)
{
    if(a>b && a>c)
        return a;
    else if(b>a && b>c)
        return b;
    else if(c>a && c>b)
        return c;
}
int main()
{
    int test;
    scanf("%d",&test);
    while(test)
    {
        int grid[100][100],m,n,infections=0,i,j,cand1,cand2,cand3,latest_infection;
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
            for(j=0;j<n;j++)
                scanf("%d",&grid[i][j]);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cand1=0;
                cand2=0;
                cand3=0;
                if(j>0)
                    cand1=grid[i-1][j-1];
                cand2=grid[i-1][j];
                if(j<=n-2)
                    cand3=grid[i-1][j+1];
                latest_infection=maximum(cand1,cand2,cand3);
                if(grid[i][j]<latest_infection)
                    infections++;
                grid[i][j]=max(grid[i][j],latest_infection);
            }
        }
        printf("%d",infections);
        test--;
    }
}
