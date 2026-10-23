vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<bool> ans;
        vector<long long> prefix(candiesCount.size(), 0);
        long long sum=0;
        for(int i=0; i<candiesCount.size();i++)
        {
            sum+=candiesCount[i];
            prefix[i]=sum;
        }
        for(vector<int> temp : queries)
        {
            long long favcan=temp[0];
            long long favday=temp[1];
            long long daily=temp[2];
            long totalcandiestobeeatenbefore=(favcan==0)?0:prefix[favcan-1];//if your favourite type is 0 then you dont have eat anything before
            if((favday+1)*daily<=totalcandiestobeeatenbefore)
            ans.push_back(false);
            else if((favday + 1) > prefix[favcan]) {
            ans.push_back(false);
            }
            else
            ans.push_back(true);
        }
        return ans;
    }
    //time complexity O(n) and space complexity O(n)