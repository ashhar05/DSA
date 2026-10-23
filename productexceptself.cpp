vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int prod=1;
        int count0=0;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            count0++;
            else
            prod*=nums[i];
        }
        for(int i=0; i<n; i++)
        {
            if(nums[i]!=0 && count0==0)
            {
                int temp=prod/nums[i];
                ans.push_back(temp);
            }
            else if(nums[i]==0 && count0==n)
            {
                ans.push_back(0);
            }
            else if(nums[i]==0 && count0!=n)
            {
                ans.push_back(prod);
            }
            else//non zero and 0 exist
            {
                ans.push_back(0);
            }
        }
        return ans;
        
    }