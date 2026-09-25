vector<vector<int>> threeSum(vector<int>& nums) {
4        int n=nums.size();
5        vector<vector<int>> ans;
6        sort(nums.begin(), nums.end());
7        for(int i=0; i<n ; i++)
8        {
9            if(i>0 && nums[i]==nums[i-1])
10            continue;//increase i until it gets on a new element
11            int j=i+1;
12            int k=n-1;
13            while(j<k)
14            {
15                int sum=nums[i]+nums[j]+nums[k];
16                if(sum<0)
17                {
18                    j++;//move to a larger element
19                }
20                else if(sum>0)
21                {
22                    k--;//move to a smaller element
23                }
24                else{
25                    vector<int> temp={nums[i], nums[j], nums[k]};
26                    ans.push_back(temp);
27                    j++;
28                    k--;
29                    while(j<k && nums[j]==nums[j-1])
30                    j++;
31                    while(j<k && nums[k]==nums[k+1])
32                    k--;
33                }
34            }
35        }
36        return ans;
37    }