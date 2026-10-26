int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int ans=n;//basically find the smallest index at which arr[mid]>=target
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>=target)
            {
                ans=mid;
                high=mid-1;
            }
            else//meaning the mid is smaller than target
            low=mid+1;
        }
        return ans;
    }
    