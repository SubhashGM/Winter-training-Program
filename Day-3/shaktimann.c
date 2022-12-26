#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test)
    {
        int cells,prisoners,i,j;
        scanf("%d %d",&cells,&prisoners);
        int cell[100];
        for(i=0;i<cells;i++)
            cell[i]=0;
        for(i=0;i<cells;i++)
        {
            for(j=i;j<cells;j++)
            {
                if(prisoners==0)
                    break;
                else{
                    cell[j]+=1;
                prisoners--;
                }
            }
        }
        cell[0]+=prisoners;
        for(i=0;i<cells;i++)
            printf("%d ",cell[i]);
        printf("\n");
        test--;
    }
}
