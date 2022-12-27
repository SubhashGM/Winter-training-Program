#include<stdio.h>
int main()
{

    int n,i;
    scanf("%d",&n);
    int a[10000];
    for(i=0;i<n-1;i++)
        scanf("%d",&a[i]);
    int num=a[0];
    for(i=1;i<n;i++)
        num=num^a[i];
    printf("Missing coin: %d",num);
    return 0;
}
