#include<bits/stdc++.h>
int merge(vector<int>& arr, int low, int mid, int high)
{
    int left=low;
    int right=mid+1;
    int count=0;
    vector<int> temp;
    while(left<=mid && right<=high)
    {
        if(arr[left]<=arr[right])//int this case, we will not count the inversions because the left element is less than or equal to the right element
        {
            temp.push_back(arr[left]);
            left++;
        }
        else//this is the condition we want
        {
            temp.push_back(arr[right]);
            count+=(mid-left+1);//counting the inversions
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
    return count;
}
int mergesort(vector<int>& arr, int low, int high)
{
    int count=0;
    if(low>=high)
    return count;
    int mid=(low+high)/2;
    count+=mergesort(arr,low,mid);
    count+=mergesort(arr,mid+1,high);
    count+=merge(arr,low,mid,high);
    return count;
}
int countInversions(vector<int>& arr, int n)
{
    return mergesort(arr,0,n-1);
}