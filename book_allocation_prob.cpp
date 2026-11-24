int calculate_number_of_students(vector<int>& nums, int pages)
    {
        int student=1;
        int pageStudent=0;
        for(int i=0; i<nums.size(); i++)
        {
            if(pageStudent+nums[i]<=pages)
            {
                pageStudent+=nums[i];
            }
            else
            {
                student++;
                pageStudent=nums[i];
            }
        }
        return student;
    }
    int findPages(vector<int> &nums, int m)  {
        if(m>nums.size())
        return -1;
        int high=0;//should be sum of all elements
        int low=INT_MIN;//should be the maximum elements in the array
        for(int i=0; i<nums.size(); i++)
        {
            high+=nums[i];
            low=max(low, nums[i]);
        }   
        while(low<=high)
        {
            int mid=(low+high)/2;
            int n=calculate_number_of_students(nums, mid);
            if(n==m)//maybe my answer but we need smaller
            {
                high=mid-1;//we could save mid aswell like ans=mid
            }
            else if(n>m)//we are in left half answer is in right
            {
                low=mid+1;
            }
            else
            high=mid-1;
        }  
        return low;   
    }