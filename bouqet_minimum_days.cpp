bool to_check_if_given_can_make_m_bouqets(vector<int>& bloomDay, int i, int k, int m)//i representing day
    {
            int n=bloomDay.size();
            int count=0;
            int mm=0;
            for(int j=0; j<n; j++)
            {
                if(i>=bloomDay[j])
                count++;
                else
                {
                    mm+=count/k;
                    count=0;
                }
            }
            mm += count / k;
            if(mm>=m)
            return true;
            return false;
    }
int roseGarden(int n,vector<int> bloomDay, int k, int m) {
        if((long long)k*m>n)
        return -1;
        int lowest=INT_MAX;
        int maximum=INT_MIN;
        for(int i=0; i<n; i++)
        {
            lowest=min(lowest, bloomDay[i]);
        } 
        for(int i=0; i<n; i++)
        {
            maximum=max(maximum, bloomDay[i]);
        }
        int low=lowest;
        int high=maximum;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(to_check_if_given_can_make_m_bouqets(bloomDay, mid, k, m))
            {
                high=mid-1;//maybe my answer but need even smaller
            }
            else
            low=mid+1;
        }
        return low;
   
  }