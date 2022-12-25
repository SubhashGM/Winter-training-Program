#include<stdio.h>
/*Choices
A-Angle
Q-Query
u-Update
-1 - Exit()*/
int rotateangle(int a[20][20],int n,int angle)
{
    int angle,temp[20][20],total,i,j;
    printf("Enter angle:");
    scanf("%d",&angle);
    total=(angle/90)%4;
    while(total)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                temp[j][n-i-1]=a[i][j];
            }
        }
        printf("Matrix after %d rotation:\n",total);;
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
int main()
{
    int i,j,n,matrix[20][20];
     printf("Enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&matrix[i][j]);
    }
    rotatedmatrix
   /* char choice;
    scanf("%d",&choice);
    do{
        if(choice == 'A')
        {

        }
    }while(choice!=-1)*/
    return 0;
}
