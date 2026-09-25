vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt1=0, cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        for(int i=0; i<n; i++)
        {
            if(cnt1==0 && el2!=nums[i])
            {
                el1=nums[i];
                cnt1=1;
            }
            else if(cnt2==0 && el1!=nums[i])
            {
                el2=nums[i];
                cnt2=1;
            }
            else if(el1==nums[i])
            cnt1++;
            else if(el2==nums[i])
            cnt2++;
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;
        for(int i=0; i<n; i++)
        {
            if(el1==nums[i])
            cnt1++;
            if(el2==nums[i])
            cnt2++;
        }
        vector<int> ans;
        int maxi=(int)(n/3)+1;
        if(cnt1>=maxi)
        ans.push_back(el1);
        if(cnt2>=maxi)
        ans.push_back(el2);
        return ans;
    }
    // time complexity=O(n) and space complexity=O(1);
    //there can never be more than three elements in the array as each majority elemnt has to appear more than n/3 times 
    //so there can be atmost 2 elements in the array which can be majority elements