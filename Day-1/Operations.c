#include<stdio.h>
int a;
int main()
{
    int a=10,b=20,c,d=3;
    c=++a||!b&&d++;
   printf("%d %d %d %d",a,b,c,d);
}
