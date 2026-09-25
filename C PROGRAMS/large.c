#include<stdio.h>
int main() 
{
    int a,b,c;
    printf("Enter all the nos at once");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf("LARGEST NUMBER=%d",a);
        else 
        printf("LARGEST NUMBER=%d",c);
    }
    else
    {
    if(b>c)
    printf("LARGEST NUMBER=%d",b);
    else
    printf("LARGEST NUMBER=%d",c);
    }
}