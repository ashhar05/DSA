int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int ans=INT_MAX;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[low]==nums[mid] && nums[mid]==nums[high])//store and trim dowm
            {
                ans=min(ans, nums[mid]);
                low++;
                high--;
                continue;
            }
            if(nums[low]<=nums[mid])//left halve is sorted
            {
                ans=min(ans, nums[low]);
                low=mid+1;//eliminate left half
            }
            if(nums[mid]<=nums[high])
            {
                ans=min(ans, nums[mid]);
                high=mid-1;
            }
        }
        return ans;
    }