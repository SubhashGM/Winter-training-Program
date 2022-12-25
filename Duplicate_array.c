//Find the Duplicate Element in the array using Bucketing Algorithm
#include<stdio.h>
int main()
{

    int arr[1000];
    int bucket[1000]={0};
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        bucket[arr[i]-1]++;
    }
    for(i=0;i<n;i++)
        if(bucket[i]>1)
            printf("%d is the duplicate elements",i+1);
}
