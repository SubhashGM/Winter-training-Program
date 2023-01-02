#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int u=0;
    int unique[n];
    int k=0;
    for(int i=0;i<n-1;i++)
    {
       
        k=0;
        unique[k++]=i;
        u=0;
        for(int j=i;j<n;j++)
        {
            
            if(a[j]==a[i])
            {
                u++;
                unique[k++]=j;
            }
        }
        //printf(" u: %d %d",u,a[i]);
        if(u%2==0)
        {
            for(int l=2;l<k;l++)
            {
                a[unique[l]]+=10;
              // printf(" %d %d  ",a[unique[l]],a[unique[l]]-10);
            }
        }
        else
        {
            for(int l=2;l<k;l++)
            {
                a[unique[l]]*=2;
               // printf(" %d %d  ",a[unique[l]],a[unique[l]]/2);
            }
        }
        
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
