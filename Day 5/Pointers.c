#include<stdio.h>
int main()
{
    int i=3;
    int *p;
    p=i;
    printf("%d %d\n",sizeof(&p),sizeof(i));
    printf("Value of u %u\n",i);
    printf("Address: %u",*(&i));
    return 0;
}
