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
        char c[50][50],ch;
        int i,j,n,k=1,flag=0;
        scanf("%d %c",&n,&ch);
        //scanf("%c",&ch);
        switch(ch)
        {
            case 'W':
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if((i+j)%2==0)
                    {
                        printf("W");
                    }
                    else {
                    printf("B");
                    }
                }
                printf("\n");
            }
            break;
            case 'B':
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if((i+j)%2==0)
                    {
                        printf("B");
                    }
                    else {
                    printf("W");
                    }
                }
                printf("\n");
            }
        }
        test--;
    }
    return 0;
}
