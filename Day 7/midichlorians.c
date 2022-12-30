#include<stdio.h>
int main()
{
    int vaccines[10],patients[10],n,flag=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&vaccines[i]);
    for(i=0;i<n;i++)
        scanf("%d",&patients[i]);
    for(i=0;i<n;i++)
    {
        if(vaccines[i]<patients)
            flag--;
    }
    if(flag==1)
        printf("Yes");
    else
        printf("No");
    return 0;
}
