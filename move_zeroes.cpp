#include<bits/stdc++.h>
void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp;
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i]!=0)
            temp.push_back(nums[i]);
        }
        int d=temp.size();
        for(i=0;i<d;i++)
        {
            nums[i]=temp[i];
        }
        for(i=d;i<n;i++)
        {
            nums[i]=0;
        }
    }