#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    n+=1;
    int sqr;
    sqr=(int)(sqrt(n));
    if(n%sqr==0)
        printf("Yes");
    else
        printf("No");
}
