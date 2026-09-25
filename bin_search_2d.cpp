bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0, end=row*col-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            int roww=mid/col;
            int coll=mid%col;
            if(matrix[roww][coll]==target)
            return true;//to derive row from mid find mid/col and for col find mid%col
            else if(matrix[roww][coll]>target)
            end=mid-1;
            else
            start=mid+1;
        }
        return false;
        
    }