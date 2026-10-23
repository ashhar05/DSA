vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int> suffix;
        vector<int> prefix;
        int prod=1;
        for(int i=0; i<n; i++)//prefix
        {
            
            if(i==0)
            {
                prefix.push_back(1);
            }
            else
            {
                prod*=nums[i-1];
                prefix.push_back(prod);
            }
        }
        prod=1;
        for(int i=n-1; i>=0; i--)//suffix
        {
            
            if(i==n-1)
            {
                suffix.push_back(1);
            }
            else
            {
                prod*=nums[i+1];
                suffix.push_back(prod);
            }
        }//it gets reversed
        reverse(suffix.begin(), suffix.end());
        for(int i=0; i<n; i++)
        {
            int product=prefix[i]*suffix[i];
            ans.push_back(product);
        }
        return ans;
        
    }