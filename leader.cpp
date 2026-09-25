vector<int> leader(vector<int> &arr) {
    int n=arr.size();
    vector<int> ans;
    int max=INT_MIN;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i]>max)
        {
            ans.push_back(arr[i]);
            max=arr[i];
        }
    }
    return ans;
}
time complexity: O(n) and space complexity: O(n)