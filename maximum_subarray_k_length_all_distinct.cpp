long long maximumSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        long long ans=0;
        int start=0;
        int end=0;
        long long sum=0;
        unordered_map<int, int> mpp;
        while(end<n)
        {
            mpp[nums[end]]++;
            sum+=nums[end];
            while(mpp[nums[end]]>1 || end-start+1>k)
            {
                mpp[nums[start]]--;
                sum-=nums[start];
                start++;
            }
            if(end-start+1==k)
            {
                ans=max(ans, sum);
            }
            end++;
        }
        return ans;
    }