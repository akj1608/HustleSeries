class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            {
                count++;
            }
        }
        
        if(count>=1)
        {
            return true;
        }
      else{
          return false;
      }  
    }
};