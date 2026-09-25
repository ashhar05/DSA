vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>> ans;
        for(int i=0; i<n; i++)
        {
            if(ans.empty() || intervals[i][0]>ans.back()[1])
            {//when arr.first is greater than ans ke last element ke second se
                ans.push_back(intervals[i]);
            }
            else//when arr.first is smaller than ans.second
            {
                ans.back()[1]=max(ans.back()[1], intervals[i][1]);
            }
        }
        return ans;
        
    }
    //Time complexity: O(nlogn)+O(N) space complexity: O(1) if we don't consider the space used to store the answer