vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());//sort the array
        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i]==nums[i-1])//to make i not point to a duplicate
            continue;
            for(int j=i+1; j<n ;j++)
            {
                if(j!=i+1 && nums[j]==nums[j-1])//j is not in the first 
                continue;                      //iterations and is p[oiting to a duplicate
                int k=j+1;
                int l=n-1;
                while(k<l)
                {
                    long long sum=nums[i];
                    sum+=nums[j]+nums[k];
                    sum+=nums[l];
                    if(sum==target)
                    {
                        vector<int> temp={nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1])//move to a non duplicate
                        k++;
                        while(k<l && nums[l]==nums[l+1])
                        l--;
                    }
                    else if(sum<target)//move to larger number
                    {
                        k++;
                    }
                    else//move to a smaller number
                    l--;
                }

            }
        }
        return ans;
        
    }
    //Time complexity: O(n^3) space complexity: O(1) if we don't consider the space used to store the answer