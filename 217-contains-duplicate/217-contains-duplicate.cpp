class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        int count =0;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i])
                count++;
        }
        
        if(count>0)
            return true;
        return false;
        
    }
};