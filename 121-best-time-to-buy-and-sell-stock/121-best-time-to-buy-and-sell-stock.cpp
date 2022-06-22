class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int price_min=INT_MAX;
        int n=prices.size();
        int profit=0;
        
        for(int i=0;i<n;i++)
        {
            price_min=min(prices[i],price_min);
            profit=max(profit,prices[i]-price_min);
        }
        
        return profit;
        
    }
};