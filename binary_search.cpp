int search(vector<int>& nums, int target) {
        int n=nums.size();
        int beg=0, end=n-1;
        while(beg<=end)
        {
            int mid=(beg+end)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(target>nums[mid])
            {
                beg=mid+1;
            }
            else if(target<nums[mid])
            {
                end=mid-1;
            }
        }
        return -1;
    }