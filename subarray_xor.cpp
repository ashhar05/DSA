int subarrayxork(vector<int>& arr, int k)
{
    int n=arr.size();
    unordered_map<int,int> prexor;
    int xr=0;
    prexor[0]=1;
    int count=0;
    for(int i=0; i<n; i++)
    {
        xr=xr^arr[i];
        int x=xr^k;
        count+=prexor[x];
        prexor[xr]++;
    }
    return count;
}