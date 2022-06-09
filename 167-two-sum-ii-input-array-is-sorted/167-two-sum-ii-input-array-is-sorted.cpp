class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n=nums.size();
        int low=0;
        int high=n-1;
        
        vector<int>v;
        
        while(low<high)
        {
            if(nums[low]+nums[high]>target) high--;
            
            else if(nums[low]+nums[high]<target) low++;
            
            else
            {
                
                v.push_back(low+1);
                v.push_back(high+1);
                break;
                
            }
            
        }
        return v;
        
    }
};