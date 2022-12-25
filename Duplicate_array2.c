#include<stdio.h>
int main()
{
  int left=0,right=1;
  int n,i,arr[20],k,diff;
  printf("Enter Sorted array:")
  for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
  printf("Enter number:")
  scanf("%d",&k);
  while(left<right)
  {
      diff=fabs(arr[left]-arr[right]);
      if(diff==x)
        printf("Elements %d and %d",arr[left],arr[right]);
      else if(diff>x)
        right++;
      else
        left++;
  }
}
