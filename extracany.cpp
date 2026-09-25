vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int most=candies[0];
        int n=candies.size();
        vector<bool> kyabe;
        for(int i=0; i<n; i++)//finding the largest no of candies
        {
            if(most<candies[i])
            most=candies[i];
        }
        for(int i=0; i<n; i++){
            int s= extraCandies +candies[i];
            if(s>=most)
            kyabe.push_back(true);
            else 
            kyabe.push_back(false);
        }
        return kyabe;
        
    }