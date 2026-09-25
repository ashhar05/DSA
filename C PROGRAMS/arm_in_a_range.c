#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,i,j,min,max,dig;
    scanf("%d %d",&a,&b);
    min=(a<b)?a:b;
    max=(a>b)?a:b;
    int arm;
    int f;
    for(i=min;i<=max;i++)
    {   
        f=0;
        j=i;
        while(j!=0)
        {
            j=j/10;
            f++;
        }
        j=i;
        arm=0;
        while(j!=0)
        {
          dig=j%10;
          j=j/10;  
          arm=arm+pow(dig,f);  
        }
        if(arm==i)
            printf("%d ",i);
    }
    return 0;
}
