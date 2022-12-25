#include<stdio.h>
int main()
{

    int angle,total,n,i,j,matrix[50][50],temp[50][50];
    printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
    }
    printf("Enter angle:");
    scanf("%d",&angle);
    total=(angle/90)%4;
    while(total)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                temp[j][n-i-1]=matrix[i][j];
            }
        }
        printf("Matrix after %d rotation:",total);;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                //matrix[i][j]=temp[i][j];
                printf("%d ",temp[i][j]);
            }
            printf("\n");
        }
        total--;
    }
}
