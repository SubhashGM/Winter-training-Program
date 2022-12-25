//Intersection of 2 arrays using Two pointers
#include<stdio.h>
int main()
{
    int test,count=0;
    scanf("%d",&test);
    while(test)
    {
        int a[100],b[100],m,n,i,j;
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d",&a[i]);
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        i=0;
        j=0;
        while(i<m && j<n)
        {
            if(a[i]<b[j])
                i++;
            else if(a[i]>b[j])
                j++;
            else
                {
                    i++;
                    j++;
                    count++;
                }
        }
        if(count!=0)
            printf("1");
        else
            printf("0");
        test--;
    }
}
