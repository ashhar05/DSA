#include<stdio.h>
#include<stdlib.h>
int main()
{
    float a,b,c,s,area;
    printf("enter all the sides of triangle \n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Area of triangle=%f",area);
    return 0;
}