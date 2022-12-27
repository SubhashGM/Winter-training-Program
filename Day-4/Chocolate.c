#include<stdio.h>
int main()
{

    int a[20],n,i;
    int chocolate[100]={0};
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
      chocolate[a[i]]++;
    for(i=0;i<n;i++)
    {
        if(chocolate[i]!=-1)
        {
            if(chocolate[i]%2!=0&&i!=0)
                printf("%d",i);
        }
        else
            printf("Children will be happy!");
    }
}
