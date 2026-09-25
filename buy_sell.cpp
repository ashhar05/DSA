int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int profit=0;
        for(int i=1; i<n; i++)
        {
            int cost=prices[i]-mini;
            profit=max(profit, cost);
            mini=min(mini, prices[i]);
        }
        if(profit>0)
        return profit;
        else
        return 0;
        
    }
    // to find the maximum profit
    //to store the index of selling and buying day as well
    int maxProfit(vector<int>& prices) {
    int n = prices.size();

    int mini = prices[0];
    int buyDay = 0;

    int profit = 0;
    int buyIndex = 0;
    int sellIndex = 0;

    for (int i = 1; i < n; i++) {

        int cost = prices[i] - mini;

        if (cost > profit) {
            profit = cost;
            buyIndex = buyDay;
            sellIndex = i;
        }

        if (prices[i] < mini) {
            mini = prices[i];
            buyDay = i;
        }
    }

    return profit;
}