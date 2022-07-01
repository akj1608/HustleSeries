class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int target=n/2;
        map<int,int>mp;
        
        for( auto i : nums)
        {
            mp[i]++;
        }
        
        for (auto j : mp)
        {
            if(j.second>target)
            {
                return j.first;
            }
        }
        return -1;
    }
};