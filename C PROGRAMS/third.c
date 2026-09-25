#include <stdio.h>
int main()
{
    int a,b,c,e,sum,average;
    printf("Enter the value of the first variable \n");
    scanf("%d", &a);
    printf("Enter the value of the second variable \n");
    scanf("%d", &b);
    printf("Enter the value of the third variable \n");
    scanf("%d", &c);
    printf("Enter the value of the fourth variable \n");
    scanf("%d", &e);
    sum=a+b+c+e;
    average=sum/4;
    printf("the sum of the given numbers is= %d", sum);
    printf("the average is= %d", average);
    printf("abdullah padhayi kyu nhi karte?????");
    return 0;
}