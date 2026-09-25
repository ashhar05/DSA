#include<stdio.h>
int reverse(int n)
{
    static int rev=0;
    int d;
    if(n==0)
    return rev;
    else
    {
        d=n%10;
        rev=rev*10+d;
        reverse(n/10);
    }
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);
    int rev=reverse(n);
    printf("reverse=%d",rev);
    return 0;
}