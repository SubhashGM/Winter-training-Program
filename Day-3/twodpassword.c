#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int a[n][n],row=n-1,col=0,count=0,generator[100];
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    while(col<=n/2)
    {
        generator[count++]=a[row][col];
        col++;
        row-=2;
    }
    row=2;
    while(col<m)
    {
        generator[count++]=a[row][col];
        col++;
        row+=2;
    }
    for(i=0;i<count;i++)
    {
        int chr=generator[i]%26;
        if(chr==0)
            chr=26;
        chr+=96;
        printf("%c",(char)chr);
    }
}
