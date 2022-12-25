#include<stdio.h>
int main()
{
    int i,j,k=5;
    for(i=10;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {

            printf("%4d",i);
        }
        printf("\n");
    }
    return 0;
}
