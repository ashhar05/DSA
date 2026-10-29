bool checkInclusion(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        unordered_map<char, int> patternmap;
        for(int i=0; i<n1; i++)
        {
            patternmap[s1[i]]++;
        }
        if(n1>n2)
        return false;
        int start=0;
        int matched_char=0;
        for(int end=0; end<n2; end++)
        {
            if(patternmap.contains(s2[end]))
            {
                patternmap[s2[end]]--;
                if(patternmap[s2[end]]==0)
                matched_char++;
            }//end will keep increasing till next condition is true
           while(end-start+1>n1)//
            {
                if(patternmap.contains(s2[start])){
                   if(patternmap[s2[start]]==0)
                   matched_char--;
                   patternmap[s2[start]]++;
                }
               start++;
            }
            if (end-start+1==n1 && matched_char==patternmap.size())
            return true;
        }
       return false; 
    }