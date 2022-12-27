#include<stdio.h>
#include<math.h>
int main()
{

    int n,sum=0,temp,i,j,div,rem,count=0;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        n/=10;
        count++;
    }
    n=temp;
    for(i=count;i>0;i--)
    {
        rem=n%10;
        sum+=(int)pow(rem,i);
        n/=10;
    }
    if(sum==temp)
        printf("Yes");
    else
        printf("No");
}
