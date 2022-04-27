class Solution 
{
public:
    int countNegatives(vector<vector<int>>& grid) 
    {        
        int count = 0;
        for (const std::vector<int>& row : grid)
        {
            auto it = std::upper_bound(row.rbegin(), row.rend(), -1);
            count += std::distance(row.rbegin(), it);
        }
        return count;
    }
};