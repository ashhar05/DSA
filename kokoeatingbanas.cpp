int maximumnumberinarray(vector<int>& arr)
    {
        int maxi=INT_MIN;
        for(int i=0; i<arr.size(); i++)
        {
            maxi=max(maxi, arr[i]);
        }
        return maxi;
    }
    long long calculatetotal(vector<int>& arr, int k)
    {
        long long total=0;
        for(int i=0; i<arr.size(); i++)
        {
            total+=ceil((double)arr[i]/(double)k);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=maximumnumberinarray(piles);
        int low=1;
        while(low<=high)
        {
            int mid = low + (high - low) / 2;
            long long total=calculatetotal(piles, mid);
            if(total<=h)//can be my answer but we need smaller
            high=mid-1;
            else
            low=mid+1;
        }
        return low;
        
        
        
    }//this program is important for the type conversions and mid pointings