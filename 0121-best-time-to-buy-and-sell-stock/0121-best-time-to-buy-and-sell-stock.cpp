class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int buy=0;
    int sell=1;
    int profit =0;
    int maxprofit = 0;
    int n = prices.size();

    while(sell<n){
        if(prices[buy]<prices[sell]){
            profit=prices[sell]-prices[buy];
            maxprofit=max(profit,maxprofit);
            
        }
        else{
            buy=sell;
        }
        sell++;
    }
    
    return maxprofit;
    }
};