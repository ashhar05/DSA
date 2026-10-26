vector<int> searchRange(vector<int> &arr, int x) {
        int n=arr.size();
        vector<int> target(2, -1);
        int low=0, high=n-1;
        while(low<=high)//find the first occurance
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==x)//you maybe my answer but there might be a smaller value
            {
                int first=mid;
                target[0]=first;
                high=mid-1;
            }
            else if(arr[mid]<x)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        if(target[0]!=-1){//there is atleast one occurance{
        low=0;
        high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==x)
            {
                int last=mid;
                target[1]=last;
                low=mid+1;
            }
            else if(arr[mid]<x)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
       }
        return target;
    }