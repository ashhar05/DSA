int characterReplacement(string s, int k) {
        int n=s.size();
        int start=0;
        int maxfreq=0;
        int end=0;
        int ans=0;
        unordered_map<char, int> frequencymap;
        for(end=0;end<n; end++)
        {
            frequencymap[s[end]]++;
            maxfreq=max(maxfreq, frequencymap[s[end]]);
            if((end-start+1)-maxfreq>k)//shrink condition
            {
                frequencymap[s[start]]--;
                start++;
            }   
            ans=max(ans, end-start+1);
        }
        return ans;
    }