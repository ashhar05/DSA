//Variety 1 in which positive and negative are equal in number
vector<int> rearrangeArray(vector<int>& arr) {
        int neg_index=1, pos_index=0;
        int n=arr.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                ans[pos_index]=arr[i];
                pos_index+=2;
            }
            else
            {
                ans[neg_index]=arr[i];
                neg_index+=2;
            }
        }
        return ans;
        
    }
    //TC: O(n) and SC: O(n) for details refer notebook
//Variety 2 in which positive and negative are not equal in number
vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> pos, neg;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>0)
            {
                pos.push_back(arr[i]);
            }
            else
            {
                neg.push_back(arr[i]);
            }
        }
        if(pos.size()>neg.size())
        {
            for(int i=0;i<neg.size();i++)
            {
                arr[2*i]=pos[i];
                arr[2*i+1]=neg[i];
            }
            int index=neg.size*2;
            for(int i=neg.size();i<pos.size();i++)
            {
                arr[index++]=pos[i];
            }
        }
        else
        {
            for(int i=0;i<pos.size();i++)
            {
                arr[2*i]=pos[i];
                arr[2*i+1]=neg[i];
            }
            int index=pos.size*2;
            for(int i=pos.size();i<neg.size();i++)
            {
                arr[index++]=neg[i];
            }
        }
}
//TC: O(2n) and SC: O(n) for details refer notebook