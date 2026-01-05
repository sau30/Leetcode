class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // BF
        // int maxprofit=0;
        // for(int i=0;i<prices.size();i++){
        //     for(int j=i+1;j<prices.size();j++){
        //          int profit=prices[j]-prices[i];
        //        maxprofit=max(maxprofit,profit);
        //     }
        //   }
        // return maxprofit;
         int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if ( prices[i]<buyPrice) {
                buyPrice = prices[i];
            }

            profit = max(profit, prices[i] - buyPrice);
        }

        return profit; 
    }
};