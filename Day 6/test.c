#include<stdio.h>
int main()
{
    int len=0,i=0,j=0,num[100],k=0;
    char ch[50],copy[80];
    scanf("%[^\n]s",ch);
    while(ch[i]!='\0')
    {
        len++;
        i++;
    }
    for(i=1;i<len;i+=2)
    {
        //char a=ch[i];
        //int n=(int)a;
        //for(j=0;j<n;j++)
        printf("%s",ch[i-1]);
    }
}
