int maxVowels(string s, int k) {
        int countvowel=0;
        int start=0;
        int end=0;
        int ans=INT_MIN;
        while(end<s.length())
        {
            if(s[end]=='a'||s[end]=='e'||s[end]=='i'||s[end]=='o'||s[end]=='u')
            countvowel++;
            while(end-start+1>k)
            {
                if(s[start]=='a'||s[start]=='e'||s[start]=='i'||s[start]=='o'||s[start]=='u')
                countvowel--;
                start++;
            }
            ans=max(ans, countvowel);
            end++;
        }
        return ans;
    }