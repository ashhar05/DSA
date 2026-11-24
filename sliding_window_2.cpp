int equalSubstring(string s, string t, int maxCost) {
        int ans=0;
        int start=0;
        int end=0;
        long long sum=0;
        while(end<s.length())
        {
            sum+=abs((int)s[end]-(int)t[end]);
            while(sum>maxCost)
            {
               sum-=abs((int)s[start]-(int)t[start]);
               start++; 
            }
            ans=max(ans, end-start+1);
            end++;
        }
        return ans;
    }