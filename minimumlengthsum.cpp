int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MAX;
        int start=0;
        int sum=0;
        int end=0;
        while(end<n)//will depict the end of subarray
        {
            sum+=nums[end];
            while(sum>=target)// remove the starting element as all subarrays which are including the start element
            {//and are longer than target 
            int len=end-start+1;
            ans=min(ans, len);
            sum-=nums[start];
            start++;
            }
            end++;
        }
        if(ans!=INT_MAX)
        return ans;
        else return 0;
    }
    tc: O(n) as we are traversing the array only once