class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int ans = 0;
        std::sort(cost.rbegin(), cost.rend());
        for(int i = 0; i < cost.size(); i++) 
        {
            if(i % 3 != 2) ans += cost[i];
        }
        return ans;
    }
};