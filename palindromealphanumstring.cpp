bool isPalindrome(string s) {
        string str;
        int n=s.length();
        for(int i=0; i<n; i++){
            int y=(int)s[i];
            if(y>=48 && y<=57)//ascii of 0-9
            {
                str.push_back(s[i]);
            }
            else if(y>=65 && y<=90){//A-Z convert to lower and then push
            str.push_back(tolower(s[i]));
            }
            else if(y>=97 && y<=122)//a-z
            str.push_back(s[i]);
            else
            continue;
        }
        string str1;//for storing non reverse
        for(int i=0; i<str.length(); i++)
        {
            str1.push_back(str[i]);
        }
        reverse(str.begin(), str.end());
        if(str==str1)
        return true;
        else return false;

    }
    /*Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
time: O(n) space: O(n)*/