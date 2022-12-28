//Lemonade Stand with Time: O(n), Space: O[1]
#include<stdio.h>
int main()
{
    int n,i,count=0,fives=0,tens=0,twenty=0;
    scanf("%d",&n);
    int cust[n];
    for(i=0;i<n;i++)
        scanf("%d",&cust[i]);
    for(i=0;i<n;i++)
        if(i==0&&a[i]==5)
            count++;
    for(i=0;i<n;i++){
        switch(a[i])
        {
        case 5:
            {
                fives++;
            }break;
        case 10:{
        if(fives>0)
            tens++;
            fives--;
        else{
            count=0;
        }
        }
        break;
        case 20:{
        if(tens>0 && fives>0){
            tens--;
            fives--;}
        else if(fives>=3)
            fives-=3;
        else
            count=0;
    }break;
}
    }
    if(count==0)
        printf("false");
    else
        printf("true");
}
