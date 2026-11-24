int maximumelementinarr(vector<int>& arr)
    {
        int maxi=INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            maxi=max(maxi, arr[i]);
        }
        return maxi;
    }
    int sumofallelem(vector<int>& arr)
    {
        int sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
        }
        return sum;
    }
    bool checkdaysrequired(int mid, int d, vector<int>& arr)
    {
        long long load=0;
        int daystook=1;
        for(int i=0; i<arr.size(); i++)
        {
            if(load+arr[i]>mid)
            {
                daystook++;
                load=arr[i];
            }
            else
            load+=arr[i];
        }
        if(daystook<=d)
        return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=maximumelementinarr(weights);
        int high=sumofallelem(weights);
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(checkdaysrequired(mid, days, weights))
            high=mid-1;
            else
            low=mid+1;
        }
        return low;
        
    }