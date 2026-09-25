#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high)
{
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j)
    {
        while(i<=high && arr[i]<=pivot)
        {
            i++;
        }
        while(j>=low && arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            int temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int t=arr[j];
    arr[j]=arr[low];
    arr[low]=t;
    return j;
}
void quick_sort(vector <int> &arr, int low, int high)
{
    if(low<high)
    {
         int parti=partition(arr, low, high);
         quick_sort(arr, low, parti-1);
         quick_sort(arr, parti+1, high);

    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr, 0, n-1);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}