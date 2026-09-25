#include<stdio.h>
void inc(int loww, int high);  // Function prototype
void incc(int num);
int main()
{
    int num,low=1;
    printf("enter number\n");
    scanf("%d",&num);
    inc(low,num);
    return 0;
}
void inc(int loww,int high)
{
    if(loww>high)
    return;
    else
    {
    printf("%d",loww);
    inc(loww+1,high)
    }
}
void incc(int num)
{
    if(num==0)
    return;
    incc(num-1);
    printf("%d\n",num);
}