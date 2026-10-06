boolean palindromepermutation(string s)
{
    int n = s.length();
    unordered_map<char, int> mp;
    for(int i=0; i<n; i++)
    {
        mp[s[i]]++;
    }
    int oddCount = 0;
    for(auto it: mp)
    {
        if(it.second % 2 != 0)
        {
            oddCount++;
        }
    }
    return (oddCount<=1);
}//time complexity O(n) and space complexity O(n)
/*implementation using set
boolean palindromepermutation(string s)
{
    int n = s.length();
    unordered_set<char> st;
    for(int i=0; i<n; i++)
    {
        if(st.find(s[i]) != st.end())//if the character is already present in the set then remove it from the set
        {
            st.erase(s[i]);
        }
        else//if the character is not present in the set then insert it into the set
        {
            st.insert(s[i]);
        }
    }
    return (st.size()<=1);
}//time complexity O(n) and space complexity O(n)
*/