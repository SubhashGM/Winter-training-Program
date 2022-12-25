#include<stdio.h>
int main()
{
    int first=2,second=3,n,next;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {

        next=first*second;
        first+=4;
        second+=2;
        printf("%5d",next);
    }
}
