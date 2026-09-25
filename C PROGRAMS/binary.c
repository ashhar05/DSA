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
        for(j=i+1;j<n-1;j++)
        { 
           if(ar[i]>ar[j])
           {
           t=ar[i];
           ar[i]=ar[j];
           ar[j]=t;
           }
        }
    }
    printf("\nSORTED ARRAY\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    int beg=0;
    int end=n-1;
    int mid=((n-1)/2);
    int key;
    printf("\nENTER ELEMENT TO BE FOUND\n");
    scanf("%d",&key);
    int f=0;
    for(i=0;i<n;i++)
    {
        if(key==ar[mid])
        {
            f++;
            printf("ELEMENT FOUND AT %d",mid);
            break;
        }
        if(ar[mid]>key)
        {
            end=mid-1;
            mid=(beg+end)/2;
        }
        if(ar[mid]<key)
        {
            beg=mid+1;
            mid=(beg+end)/2;
        }
        
    }
    if(f==0)
    {
        printf("ELEMENT NOT FOUND ERROR 404 :(");
    }
    return 0;
}