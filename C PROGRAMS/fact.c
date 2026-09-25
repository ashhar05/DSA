#include<stdio.h>
int main()
{
    int num,i;
    long long int fact;//other wise 16 ke factorial se zyada nhi niklega
    char choice;
    do
    {
        printf("enter the number \n");
        scanf("%d",&num);
        for(i=1,fact=1;i<=num;i++)
        {
            fact=fact*i;p
        }
        printf("Factorial=%lld",fact);
        printf("\n Do you want to continue?,press y");
        scanf("%*c%c",&choice);// to remove enter from character
    }
    while(choice=='y'|| choice=='Y');
    return 0;
}
