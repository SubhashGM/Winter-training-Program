#include<stdio.h>
int main()
{
    int g,c,i,count;
    scanf("%d",&g);
    int greed[g];
    for(i=0;i<g;i++)
        scanf("%d",&greed[i]);
    scanf("%d",&c);
    int cookies[c];
    for(i=0;i<c;i++)
    {
        if(count<g && greed[count]<=cookies[i]){
            count++;
        }
    }
    printf("%d",count);
}
