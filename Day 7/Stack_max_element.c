#include<stdio.h>
#define MAX 5
int Stack[MAX],top=-1;
int Push(int x);
int Pop();
int Top();
int Display();
int main()
{
    int n,i=0,x,choice;
    scanf("%d",&n);
    while(i<n)
    {
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            scanf("%d",&x);
            Push(x);
            break;
        case 2:
            Pop();
            break;
        case 3:
            Top();
            break;
        }
    }
    return 0;
}
int Push(int x)
{
    top++;
    Stack[top]=x;
    return 0;
}
int Pop()
{
    top--;
    return 0;
}
int Top()
{
    printf("%d\n",Stack[top]);
    return 0;
}
