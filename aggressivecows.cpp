 bool canweplace(vector<int>& nums, int minimumdistance, int cows)
    {
        int countcows=1;//how many are placed
        int lastplacedlocation=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]-lastplacedlocation>=minimumdistance)
            {
                countcows++;
                lastplacedlocation=nums[i];
            }
            if(countcows>=cows)
            {
                return true;
            }
        }
        return false;
    }
    int aggressiveCows(vector<int> &nums, int cows) {
        sort(nums.begin(), nums.end());
        int low=1;
        int high=nums[nums.size()-1]-nums[0];//largest element - minimum element
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(canweplace(nums, mid, cows))
            {
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return high;
        
    }