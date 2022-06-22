class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();  
  
        
        int profit=0;
        
        for(int i=1;i<prices.size();i++)
        {
            int ins= prices[i]-prices[i-1];
           if(ins>0)
            profit+= ins;
        }
        
        return profit;
    }
};