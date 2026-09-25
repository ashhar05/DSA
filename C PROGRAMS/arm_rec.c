#include<stdio.h>
#include<math.h>
int countdig(int x)
{
    if(x==0)
    return 0;
    else
    return 1+countdig(x/10);
}
int armstrongsum(int num,int d)
{ 
    int digit;
    if(num==0)
    return 0;
    else
    {
        digit=num%10;
        return pow(digit,d)+armstrongsum(num/10,d);
    }
}
int isarms(int num)
{
    if(num<0)
    return 0;
    if(num==0)
    return 1;
    int digits=countdig(num);
    int sum=armstrongsum(num,digits);
    return(sum==num);
}
int main()
{
    int number;
    printf("enter no");
    scanf("%d",&number);
    if(isarms(number))
    printf("armstrong");
    else
    printf("not armstong");
    return 0;
}
