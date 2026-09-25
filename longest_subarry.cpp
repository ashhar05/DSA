int longestSubarray(vector<int> &nums, int k){
        int n=nums.size();
        int maxx=0;
        int left=0;
        int right=0;
        int sum=nums[right];
        while(right<n)
        {
            while(left<=right && sum>k)
            {
                sum-=nums[left];
                left++;
            }
        
            if(sum==k)
        {
            maxx=max(maxx,right-left+1);
        }
        right++;
        sum+=nums[right];
        }
            return maxx;
    }