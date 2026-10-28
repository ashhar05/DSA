int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        if(nums[0]!=nums[1])
        return nums[0];
        if(nums[n-1]!=nums[n-2])
        return nums[n-1];//becuase we are trimming our serch space
        int low=1;
        int high=n-2;
        int ans;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if((nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]))
            ans= nums[mid];
            if(((mid%2!=0) && nums[mid]==nums[mid-1]) || (mid%2==0)&& nums[mid+1]==nums[mid])//mid is odd and element before it is equl-> left half ans in ->right half
            {
                low=mid+1;
            }
            else//mid is even and element after it is equl-> left half ans in ->right half
            high=mid-1;
        }
        return ans;
        
    }