class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int prc1=INT_MAX;
        int prc2=INT_MAX;
        int gain1=0;
        int gain2=0;
        int n=prices.size();
        
        
        for(int i=0;i<n;i++)
        {
            prc1=min(prc1,prices[i]);
            gain1=max(gain1,prices[i]-prc1);
            
            prc2=min(prc2,prices[i]-gain1);
            gain2=max(gain2,prices[i]-prc2);
        }
        
        
        return gain2 ;
        
        
    }
};