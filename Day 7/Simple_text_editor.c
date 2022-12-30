#include<stdio.h>
#include<string.h>
#define max 500
char *Stack;
int top=-1;
int append(char *a)
{
  strcat(Stack,a);
  return 0;
}
int ele()
{
    printf("%s",Stack);
    return 0;
}
int main()
{
   int n;
   scanf("%d",&n);
   while(n)
   {
       char *ptr;
       scanf("%s",ptr);
       append(ptr);
       ele();
       n--;
   }
}
