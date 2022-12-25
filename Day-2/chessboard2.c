#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    scanf("%d",&test);
    while(test)
    {
        int n,k=1,i,j,ch,flag=0;
        scanf("%d%c",&n,&ch);
        if(ch=='W')
            flag=1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(ch=='W')
                {if(k==1)
                    printf("W");
                else
                    printf("B");
                }
                else if(ch=='B')
                {
                    if(k==1)
                    printf("B");
                else
                    printf("W");
                }
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
