int firstUniqChar(string s) {
        unordered_map<char, int> mpp;
        for(int i=0; i<s.length(); i++)
        {
            mpp[s[i]]++;//counting each alphabet
        }
        int i=0;
        for(int i = 0; i < s.length(); i++)
        {
        if(mpp[s[i]] == 1)
        return i;
        }
        return -1;
        
    }