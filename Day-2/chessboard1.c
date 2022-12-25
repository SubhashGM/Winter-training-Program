#include <stdio.h>

int main()
{
    int rows, cols, i, j, k;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    k = 1;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows; j++)
        {
            if(k == 1)
            {
                printf("W");
            }
            else
            {
                printf("B");
            }

            // If k = 1  then k *= -1 => -1
            // If k = -1 then k *= -1 =>  1
            k *= -1;
        }

        if(rows % 2 == 0)
        {
            k *= -1;
        }

        printf("\n");
    }

    return 0;
}
