#include<stdio.h>
int main()
{
    int ele[100],n,i=2,j=3;
    scanf("%d",&n);
    for(int N=0;N<n;N++)
    {
        printf("%05d\n",i*j);
        i+=2;
        j+=4;
    }
    return 0;
}
