string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string result;
        int firstword=strs[0].length();
        for(int i=0; i<firstword; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i>=strs[j].length() || strs[j][i]!=strs[0][i])
                return result;//if we use break here it will stop this loop but outer loop will keep on executing
            }
            result.push_back(strs[0][i]);
        }
        return result;
        
    }
    /*Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings*/