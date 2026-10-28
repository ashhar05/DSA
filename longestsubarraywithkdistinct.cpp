int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        unordered_map<int, int> mpp;
        int start=0;
        int end=0;
        int k=2;
        int ans=INT_MIN;
        while(end<n)
        {
            mpp[fruits[end]]++;
            while(mpp.size()>k)
            {
                mpp[fruits[start]]--;
            if (mpp[fruits[start]] == 0)
            {
            mpp.erase(fruits[start]);
            }
                start++;
            }
            ans=max(ans, end-start+1);
            end++;
        }
        return ans;
    }