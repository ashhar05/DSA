#include<stdio.h>
int perf(int);
int sumdivisor(int n,int divisor);
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    if(perf(n)==1)
    printf("perfect no");

    else
    printf("not perfect");
    return 0;
}
int perf(int n)
{
    if(n<=1)
    return 0;
    int sum=sumdivisor(n,n/2);
    return (sum==n);
}
int sumdivisor(int n,int divisor)
{
    if(divisor<=0)
    return 0;
    if(n%divisor==0)
    {
        return (divisor+sumdivisor(n,divisor-1));
    }
    else 
    return sumdivisor(n,divisor-1);
}