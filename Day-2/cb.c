#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    scanf("%d",&test);
    while(test)
    {
        int n,k=1,i,j;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(k==1)
                    printf("W");
                else
                    printf("B");
                k*=-1;
            }
            if(n%2==0)
            {
                k*=-1;
            }
            printf("\n");
        }
        test--;
    }
    return 0;
}
