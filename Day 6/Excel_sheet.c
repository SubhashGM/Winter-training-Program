#include<stdio.h>
int main()
{
    int n,rem;
    scanf("%d",&n);
    if(n<=26)
    {   n+=64;
        printf("%c",(char)n);
    }
    else if(n>26)
    {
        int first=n/26,second;
        second=n%26;
        if(second=0)
            second=25;
        printf("%c%c",(char)first+64,(char)second+65);
    }
}
