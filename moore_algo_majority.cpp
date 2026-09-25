int majorityElement(vector<int>& arr) {
        int el;
        int count=0;
        for(int i=0; i<arr.size(); i++)
        {
            if(count==0)
            {
                count=1;
                el=arr[i];
            }
            else if(el==arr[i])
            count++;
            else 
            count--;
        }
        return el;
        
    }
    //assuming that the majority element is always preent 
    /*if its not mentioned that the majority is always present then
    check by taking that element and iterate the array and count the 
    times it appears again if the new count is greater than n/2 then 
    return it else return -1
    Time Complexity: O(n), Space Complexity: O(1) but if 
    you check majority element it would add another 0(N) */