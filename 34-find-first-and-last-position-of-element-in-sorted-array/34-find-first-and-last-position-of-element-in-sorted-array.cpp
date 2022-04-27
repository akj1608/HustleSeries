class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        int low=0;
        int high=n-1;
        
        vector<int>res={-1,-1};
        
        
        while(low<=high)
        {
            
            int mid=(low+high)/2;
            
            // find left part
            if(nums[mid]==target)
            {
                res[0]=mid;
                high=mid-1;
            }
            
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
        }
        
        // find the right part
           
         low=0;
        high=n-1;
        
       
        
        
        while(low<=high)
        {
            
            int mid=(low+high)/2;
            
            // find right part
            if(nums[mid]==target)
            {
                res[1]=mid;
                low=mid+1;
            }
            
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else 
            {
                high=mid-1;
            }
        }
        return res;
    }
};