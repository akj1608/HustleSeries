class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n=prices.size();
      
      int min_price=prices[0];
      int profit=0;
      
      
      for(int i=0;i<n;i++)
      {
        min_price=min(min_price,prices[i]);
        profit=max(profit,prices[i]-min_price);
        
      }
      return profit;
        
    }
};