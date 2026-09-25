void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>=n)
        k=k%n;
        if(k==0)
        return;
        else
        {
        vector<int> temp(k);
        for(int i=0;i<k;i++)
        {
            temp[i]=nums[n-1-i];
        }
        reverse(temp.begin(),temp.end());
        int ii=n-k;
        vector<int> temp2(ii);
        for(int i=0;i<n-k;i++)
        {
        temp2[i]=nums[i];
        }
        for(int i=0;i<k;i++)
        {
           nums[i]=temp[i]; 
        }
        for(int i=0;i<n-k;i++)
        {
            nums[k+i]=temp2[i];
        }
    }
    }