int ncr(int r, int c)
    {
        int res=1;
        for(int i=0; i<c; i++)
        {
            res=res*(r-i);
            res=res/(i+1);
        }
        return res;
    }
    //better approach
    vector<vector<int>> generate(int numRows) {
        {
            int n=numRows;
            vector<vector<int>> pascal;
            for(int r=1; r<=n; r++)
            {
                 vector<int> row;//new row every time
                for(int c=1; c<=r; c++)
                {
                    int k=ncr(r-1, c-1);
                    row.push_back(k);
                }
                pascal.push_back(row);
            }
            return pascal;
        }
        
    }
    vector<int> generator(int row)
    {
        long long ans=1;
        vector<int> ansrow;
        ansrow.push_back(1);
        for(int i=1;i<row; i++){
            ans=ans*(row-i);
            ans=ans/i;
            ansrow.push_back(ans);
        }
        return ansrow;
    }
    vector<vector<int>> generate(int numRows) {
        {
            int n=numRows;
            vector<vector<int>> pascal;
            for(int r=1; r<=n; r++)
            {
                pascal.push_back(generator(r));
            }
            return pascal;
        }
        
    }