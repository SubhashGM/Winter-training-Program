#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[40],even=0,odd=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            arr[i]=pow(2,even);
            even++;
        }
        else if(i%2!=0)
        {
            arr[i]=pow(3,odd);
            odd++;
        }
    }
        printf("%d ",arr[n-1]);
    return 0;
}
