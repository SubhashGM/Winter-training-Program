#include<stdio.h>
int main()
{
int stones,moves;
scanf("%d",&stones);
moves = stones%4 + stones/4;
if(moves%2==0)
    printf("Alice Wins");
else
    printf("Bob Wins!");
}
