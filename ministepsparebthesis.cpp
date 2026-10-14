int minimumstepparenthesis(string s)
{
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++)
    {
        if(s[i]==')' && !st.empty() && st.top()=='(')// if the character is ')' and the stack is not empty and the top of the stack is '(' then pop the top of the stack
        st.pop();
        else 
        st.push(s[i]);// for all other cases push the character into the stack
    }
    return st.size();
}
//time complexity O(n) and space complexity O(n)
