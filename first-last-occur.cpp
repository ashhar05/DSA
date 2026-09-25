vector<int> find(vector<int>& arr, int x) {
        vector<int> target(2, -1);

        for (int i=0; i<arr.size(); i++) {
            if (arr[i]==x) {
                if (target[0]==-1)
                    target[0] = i;

                target[1] = i;
            }
        }

        return target;
    }
    //time complexity: O(n) and space complexity: O(1)
    vector<int> find(vector<int> &arr, int x) {
        int n=arr.size();
        vector<int> target(2, -1);
        int low=0, high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==x)
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
        return target;
    }
    //time complexity: O(logn) and space complexity: O(1)