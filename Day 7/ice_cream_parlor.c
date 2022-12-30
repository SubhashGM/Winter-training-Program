#include<stdio.h>
int main()
{
    int test;
    scanf("%d",test);
    while(test)
    {
        int key,n,arr[30];
        scanf("%d %d",&key,&n);
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        for(i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((arr[i]+arr[j])==key)
                {
                    printf("%d %d\n",i+1,j+1);
                }
            }
        }
        test--;
    }
}
