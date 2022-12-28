#include<stdio.h>
int swap(int *a,int *b)
{int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("Value of a and b a=%d , b=%d", a, b);
    return 0;
}
int main()
{
    int m=10,n,o,*z,x=10,y=20;
    z=m;
    printf("&m is the address of m = %x",&m);
    printf("\nValue of m is %d",m);
    printf("\nValue of m using & is %d",*(&m));
    printf("Value of  a and b before swapping a=%d b=%d",x,y);
    swap(&x,&y);
    printf("%u %u",*x,*y);
}
