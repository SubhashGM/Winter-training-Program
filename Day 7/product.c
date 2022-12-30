//Power of a number using divide and conquer
#include<stdio.h>
int russian_peasant(int a,int b)
{
    int res=0;
    while(b>0)
    {
        if(b&1)
           res+=a;
        a=a>>1;
        b=a<<1;
    }
    return res;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Product of a and B:%d",russian_peasant(a,b));
    return 0;
}
