int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int closest=nums[1]+nums[0]+nums[2];//assume first three to be closest
        for(int i=0; i<n; i++)
        {
            if(i>0 && nums[i]==nums[i-1])
            continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                int difference=sum-target;
                //we will absolute value and find smallest absolute value using abs();
                if(abs(difference)<abs(closest-target))
                closest=sum;
                if(sum==target)//if sum is target closest is zero
                {
                    return target;
                }
                else if(sum>target){
                k--;
                while(j<k && nums[k]==nums[k+1])
                    k--;
                }
                else
                {
                    j++;
                    while(j<k && nums[j]==nums[j-1])
                    j++;
                }
                
            }
        }
        return closest;
        
    }