int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int end=n-1;
        while(low<=end)
        {
            int mid=(low+end)/2;
            if(nums[mid]==target)
            return mid;
            if(nums[low]<=nums[mid])//assuming left half is sorted
            {
                if(nums[low]<=target && nums[mid]>=target)//it is between
                end=mid-1;
                else//not in between
                low=mid+1;
            }
            else//right half is sorted
            {
                if(nums[mid]<=target && nums[end]>=target)
                low=mid+1;
                else 
                end=mid-1;
            }
        }
        return -1;
    }