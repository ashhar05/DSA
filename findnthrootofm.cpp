int findmid(int mid, int n, int m)
  {
    long long ans=1;
    for(int i=1; i<=n; i++)
    {
        ans*=mid;
        if(ans>m)
        return 0;
    }
    if(ans==m)
    return 1;
    else
    return 2;//ans is lesser
  }
  int NthRoot(int n, int m) {
    int low=1;
    int high=m;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int ans=findmid(mid, n, m);
        if(ans==1)
        return mid;
        else if(ans==0)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
       
    }