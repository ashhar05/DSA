#include<stdio.h>  // Function prototype
int sum(int num);
int main()
{
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    int addd=sum(num);
    printf("sum=%d",addd);
    return 0;
}
int sum(int num)
{
    int add=0;
    if(num==0)
    return 0;
    else
    return num+ sum(num-1);
}