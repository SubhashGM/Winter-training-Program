#include<stdio.h>
int main()
{
    char str[100000];
    int rem,i=0,n;
    scanf("%d",&n);
    while(n>0)
    {
        rem=(n-1)%26;
        str[i++]=(char)(rem+'A');
        n=(n-1)/26;
    }
    for(int j=i-1;j>=0;j--)
        printf("%c", str[j]);
    return 0;
}
