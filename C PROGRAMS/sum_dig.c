#include<stdio.h>
int great(int,int);
int main()
{
    int a,b,min,max,gcd;
    printf("Enter a and b");
    scanf("%d %d",&a,&b);
    max=(a>b)?a:b;
    min=(a<b)?a:b;
    gcd=great(min,max);
    printf("gcd=%d",gcd);
    return 0;
}
int great(int p,int q)
{
    if(q==0)
    return p;
    else
    return great(q,q%p);
}