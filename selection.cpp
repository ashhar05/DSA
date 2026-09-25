#include<bits/stdc++.h>
void selection(int arr[],int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini=i;
        for(int j=i+1;j<=n-1;j++)
        {
            if(arr[mini]>arr[j])
            mini=j;
        }
        if(mini!=i)
        {
            int temp=arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
        }
    }
}
void bubble(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j+1]<arr[j])
            {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp; 
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection(arr, n);
    for (int i = 0; i < n; i++)
    {
    cout << arr[i]<<" ";
    }
    delete[] arr;
    return 0;
}
