#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int asum,arrsum=0,i,n,k,arr[100],temp,rem,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {scanf("%d",&arr[i]);
        printf("%d ",arr[i]);}
    for(i=0;i<n;i++)
    {
        k=0,sum=0;
        temp=arr[i];
        while(temp)
        {
            rem=temp%10;
            rem=abs(rem-5);
            sum=(rem*pow(10,k))+sum;
            k++;
            temp/=10;
        }
        arr[i]=sum;
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        asum=0;
        while(temp)
        {
            rem=temp%10;
            asum+=rem;
            temp/=10;
        }
        asum%=10;
        if(asum==0)
            asum=1;
        arr[i]=asum;
    }
    for(i=0;i<n;i++)
    {
        arrsum+=arr[i];
    }
    printf("%d",arrsum);
    // for(i=0;i<n;i++)
    //     printf("%d ",arr[i]);
    return 0;
}#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int b[100]={0};
int to_lower(char s[])
{
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]+=32;
    }
    return 0;
}
int str_len(char a[])
{
    int i=0,len=0;
    while(a[i]!='\0')
    {
        len++;
        i++;
    }
    return len;
}
int encrypt(int s[],int n)
{
    //char space=' ';
    //int Space=(char)space;
    int i,k=0,c,diff;
    for(i=1;i<n;i++)
    {
        if(k==0)
           b[k]=s[0];
        b[k+=2]=s[i];
    }
    // for(i=0;i<k;i++)
    //     printf("%d\n",b[i]);
    for(i=1;i<=k;i+=2)
    {
        if(b[i]==' ')
            i+=3;
        else {
        diff=abs(b[i-1]-b[i+1]);
        if(diff==0)
            b[i]=47;
        else
            b[i]=diff;
        }
    }
    //printf("Space: %d",Space);
    for(i=0;i<=k;i++)
        printf("%c",(char)b[i]+96);
    return 0;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char a[100];
    scanf("%[^\n]s",a);
    int b1[100],k=0;
    to_lower(a);
    for(int i=0;a[i]!='\0';i++)
    {   if(a[i]==' ')
            k++;
        else
            b1[k++]=(int)a[i]-96;
    }
    encrypt(b1,k);
    return 0;
}
