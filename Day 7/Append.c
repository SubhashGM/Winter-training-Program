#include<stdio.h>
int str_len(char s[100])
{
    int len=0,i=0;
    while(s[i]!='\0')
    {
        len++;
    }
    return len;
}
int main()
{
    char s1[100],s2[100];
    scanf("%[^\n]s",&s1);
    int len1=str_len(s1);
    scanf("%[^\n]s",&s2);
    int len2=str_len(s2);
    int i=len1,j=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    printf("Concatenated strings : %s",s1);
    return 0;
}
