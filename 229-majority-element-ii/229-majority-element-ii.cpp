class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      
        
        int n=nums.size();
        
        
        vector<int>temp;
        map<int,int>mp;
        
        for( auto i : nums)
        {
            mp[i]++;
        }
        
        for (auto j : mp)
        {
            if(j.second>n/3)
            {
                
                temp.push_back(j.first);
            }
        }
        return temp;
    

    }
};