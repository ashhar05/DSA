int findMin(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int end=n-1;
        int ans=INT_MAX;
        while(low<=end)
        {
            int mid=(low+end)/2;
            if(nums[low]<=nums[mid])//left is sorted
            {
                ans=min(ans, nums[low]);//store the smallest element in lef halve
                low=mid+1;//eliminate the left halve as there is nothing smaller in it than ans
            }
            else//right half is sorted
            {
                ans=min(ans, nums[mid]);
                end=mid-1;//eliminate the right half
            }
        }
        return ans;
    }