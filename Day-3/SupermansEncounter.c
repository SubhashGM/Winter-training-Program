#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    while(test)
    {
        int n;
        scanf("%d",&n);
        int arrival_day=n+1;
        arrival_day%=296;
        if(arrival_day==0)
                arrival_day=296;
        arrival_day%=10;
        if(arrival_day==0)
            arrival_day=10;
        switch(arrival_day)
        {
        case 1:
            printf("Sunday");
            break;

        case 2:
            printf("Monday");
            break;

        case 3:
            printf("Tuesday");
            break;

        case 4:
            printf("Wednesday");
            break;

        case 5:
            printf("Thursday");
            break;

        case 6:
            printf("Friday");
            break;

        case 7:
            printf("Saturday");
            break;

        case 8:
            printf("Kryptonday");
            break;

        case 9:
            printf("Coluday");
            break;

        case 10:
            printf("Daxamday");
            break;
        }
        printf("\n");
        test--;
    }
}
