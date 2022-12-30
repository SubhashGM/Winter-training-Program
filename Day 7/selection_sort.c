#include<stdio.h>
int sort_array(int a[],int n)
{
    int temp;
    for(int j=0;j<n-1;j++)
    {
    for(int i=0;i<n-1-j;i++)
    {
        if(a[i+1]<a[i])
        {
            temp=a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
        }
    }}
}
int main()
{
    int a[10],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
            scanf("%d",&a[i]);
    sort_array(a,n);
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
