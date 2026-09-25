string reverseWords(string s) {
        int n=s.length();
        string result;
        vector<string> words(1, "");
        int temp=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==' '){
            temp++;
            words.push_back("");//if we had not written this then new conatiner for next word will not be created and it would cause the array to go out of bounds
            }
            else if(s[i]!=' ')
            words[temp].push_back(s[i]);
        }
        reverse(words.begin(), words.end());
        int m=words.size();
        for(int i=0; i<m; i++)
        {
            if(words[i].length()<1)
            continue;//skips the empty elements in vectors adding those will make me create extra spaces
            result+=words[i];//adding those words only who have actuall character
            if(i<m-1)
            result+=' ';
        }  
        if(result[result.length()-1]==' ')
        result.pop_back();//removes the last extra space which was by the last iteration
        return result;  
    }
/*Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.*/