#include <stdio.h>

int main()

{

     int *ptr;

     int x;

     ptr = &x;

     *ptr = 5;

     printf("x=%d\n", x);

     printf("*ptr=%d", *ptr);

     return 0;

}
