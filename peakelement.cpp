int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return 0;
        if(nums[0]>nums[1])
        return 0;
        if(nums[n-1]>nums[n-2])
        return n-1;
        int low=1;
        int high=n-2;
        int ans;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])//mid is peak
            return mid;
            else if(nums[mid]>nums[mid-1])//mid is on ascending curve peak on right
            low=mid+1;
            else if(nums[mid]>nums[mid+1])//mid on descending curve peak is on left
            high=mid-1;
            else//you are on anti peak
            low=mid+1;//or you can also change high=mid-1
        }
        return ans;
        
    }