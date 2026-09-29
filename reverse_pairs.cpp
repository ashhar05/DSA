void merge(vector<int>& arr, int low, int mid, int high)
    {
        int left=low;
        int right=mid+1;
        vector<int> temp;
        while(left<=mid && right<=high)
        {
            if(arr[left]<=arr[right])
            {
                temp.push_back(arr[left]);
                left++;
            }
            else
            {
                temp.push_back(arr[right]);
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
        for(int i=low; i<=high; i++)
        {
            arr[i]=temp[i-low];
        }
    }
    long long countpairs(vector<int>& arr, int low, int mid, int high)
    {
        long long count=0;
        int right=mid+1;
        for(int i=low; i<=mid; i++)
        {
            while(right<=high && (long long)arr[i] > 2LL * arr[right])// LL converts the 2 into long long instead of int
            right++;
            count+=right-(mid+1);
        }
        return count;
    }
    long long mergesort(vector<int>& arr, int low, int high)
    {
        if(low>=high)
        return 0;
        long long count=0;
        int mid=(low+high)/2;
        count+=mergesort(arr, low, mid);
        count+=mergesort(arr, mid+1, high);
        count+=countpairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        return mergesort(nums, 0, n-1);
        
    }
    // time complexity= O(logn *(n+n))=O(nlogn) space complexity=O(n) for temp array