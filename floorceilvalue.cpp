int ceilvalue(vector<int> &arr, int target)
{
    int n=arr.size();
    int ans=n;//basically find the smallest index at whicharr[mid]>= target
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=target)
        {
            ans=mid;//you maybe my answer but there may be a smaller index which is also greater than or equal to target
            high=mid-1;
        }
        else//meaning the mid is smaller than target
        low=mid+1;
    }
    return ans;
}
int floorvalue(vector<int> & arr, int target)
{
    int n=arr.size();
    int ans=-1;//basically find the largest index at which arr[mid]<=target
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]<=target)
        {
            ans=mid;//you maybe my answer but there may be a larger index which is also smaller than or equal to target
            low=mid+1;
        }
        else//meaning the mid is greater than target
        high=mid-1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7,8,9};
    int target=5;
    cout<<"Ceil value of "<<target<<" is at index: "<<ceilvalue(arr,target)<<endl;
    cout<<"Floor value of "<<target<<" is at index: "<<floorvalue(arr,target)<<endl;
    return 0;
}