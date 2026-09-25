#include<stdio.h>
void table(int n,int i)
{
    if(i>10)
    return;
    printf("%d x %d = %d\n",n,i,n*i);
    table(n,i+1);
}
void num(int current,int n)
{
    if(current>n)
    return;
    table(current,1);
    num(current+1,n);
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    num(1,n);
    return 0;
    
}