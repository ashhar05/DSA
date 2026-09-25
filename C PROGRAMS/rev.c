#include<stdio.h>  // Function prototype
int rev(int num);
int main()
{
    int num;
    printf("enter number\n");
    scanf("%d",&num);
    int addd=rev(num);
    printf("reverse=%d",addd);
    return 0;
}
int rev(int num)
{
    static int reverse=0;
    int digit;
    if(num != 0)
    {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        rev(num / 10);
    }
        return reverse;
}