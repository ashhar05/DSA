long long maxSubArray(vector<int>& arr) {
        long long maxi=LLONG_MIN;
        long long sum=0;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
            if(sum>maxi)
            {
                maxi=sum;
            }
            if(sum<0)
            sum=0;
        }
        return maxi;
        
    }
    /*Time Complexity: O(n), Space Complexity: O(1)*/
    /* If you want to print the maximum subarray,
     you can modify the function to return the indices of the subarray,
     see that a new sub array starts whenever you set sum=0 */
     //to print the maximum sub array
     long long maxSubArray(vector<int>& arr) {
        long long maxi=LLONG_MIN;
        long long sum=0;
        int start=-1, ans_start=-1, ans_end=-1;
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
            start=i;
            if(sum>maxi)
            {
                maxi=sum;
                ans_start=start;
                ans_end=i;
            }
            if(sum<0)
            sum=0;
        }
        return maxi;
        
    }
    //this will give the index of the subarray just run a loop and print the elements from ans_start to ans_end