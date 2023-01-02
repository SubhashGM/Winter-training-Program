
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
 
int main() {
   int n,m;
    scanf("%d",&n);
   int a[n];
    int l=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    int c[m];
    int k=0;
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<m;i++)
    {
       for(int j=0;j<n;j++)
       {
           if(b[i]==a[j])
           {
               c[k++]=j;
           }
       }
    }
    int temp;
    for(int i=0;i<m-1;i++)
    {
        for(int j=i+1;j<m;j++)
        {
            if(a[c[i]]>a[c[j]])
            {
                temp=a[c[i]];
                a[c[i]]=a[c[j]];
                a[c[j]]=temp;
            }
        }
    }
    for(int j=0;j<n;j++)
        {
            printf("%d ",a[j]);
        }
    return 0;
}

