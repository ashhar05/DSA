int mySqrt(int x) {
4        long long low=1;
5        long long high=x;
6        while(low<=high)
7        {
8            long long mid=(low+high)/2;
9            if(mid*mid<=x){
10            //ans=mid;might be my answer but lets check a larger can be just like lower bound
11            low=mid+1;
12            }
13            else
14            high=mid-1;
15        }
16        return high;//as after the execution of while high will pointing to final ans we can also return it
17    }