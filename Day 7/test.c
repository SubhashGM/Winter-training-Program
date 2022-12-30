#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int f=0,s=0;
    scanf("%d",&f);
    int m1[f];
    for(int i=0;i<f;i++)
    {
        scanf("%d",&m1[i]);
    }
     scanf("%d",&s);
    int m2[s];
    for(int i=0;i<s;i++)
    {
        scanf("%d",&m2[i]);
    }
    int a=0;
     for (int i = 0; i < f; ++i)
        {

            for (int j = 0; j < f; ++j)
            {

                if (m1[i] > m1[j])
                {

                    a =  m1[i];
                    m1[i] = m1[j];
                    m1[j] = a;

                }
            }
     }
    int b=0;
     for (int i = 0; i < s; ++i)
        {

            for (int j = 0; j < s; ++j)
            {

                if (m2[i] > m2[j])
                {

                    b=  m2[i];
                    m2[i] = m2[j];
                    m2[j] = b;

                }
            }
     }
    int i=0,j=0,arr[30],g=0;
    while(j<s)
    {
            if(m1[i]==m2[j])
        {
            i++;

        }
       else if(m1[i]!=m2[j])
        {
          arr[g++]=m2[j];
        }
        j++;
    }
     for (int i = 0; i < g; i++)
     {  for (int j = i+1; j < g; j++)
     {
         if(arr[i]==arr[j])
         {
             arr[j]=0;
         }
     }

     }
    for (int i = g-1; i >= 0; i--)
     {  if(arr[i]!=0)
     {
          printf("%d ",arr[i]);
     }
     }

    return 0;
}

