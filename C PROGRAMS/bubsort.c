#include<stdio.h>
int main()
{
    int i,j,t,n;
    printf("Enter size\n");
    scanf("%d",&n);
    int ar[n];
    printf("ENTER ARRAY ELEMENT");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        { 
           if(ar[j]>ar[j+1])
           {
           t=ar[j];
           ar[j]=ar[j+1];
           ar[j+1]=t;
           }
        }
    }
    printf("\nSORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}