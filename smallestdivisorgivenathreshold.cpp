int maximumelementinarr(vector<int>& arr)
    {
        int maxi=INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            maxi=max(maxi, arr[i]);
        }
        return maxi;
    }
    bool checksum(int mid, int thres, vector<int>& arr)
    {
        long long sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=(ceil((double)arr[i]/(double)mid));//this line is very important
            if(sum>thres)
            return false;
        }
        if(sum<=thres)
        return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=maximumelementinarr(nums);
        while(low<=high)
        {
            int mid=(high+low)/2;
            if(checksum(mid, threshold, nums))
            {
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return low;
    }