string maxSumOfSquares(int num, int sum) {
        if(sum>9*num)//maximum sum for 3 digit is 999 =3*3 =27
        return "";
        int remainingsum=sum;
        int remainingdigit=n;
        int n=0;
        while(remainingdigit>0)//generating the maximum possible number with given sum and length
        {
            if(sum>9)
            {
                n*=10;
                n+=9;
                sum-=9;
                remainingdigit--;
            }
            else
            {
                n*=10;
                n+=sum;
                sum-=sum;
                remainingdigit--;
            }
        }
        return n;
    }