class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n,0);
        int low=0;int high=n-1,k=n-1;
        
        while(low<=high)
        {
            if(abs(nums[low])>abs(nums[high]))
            {
                ans[k--]=nums[low]*nums[low];
                low++;
                
            }
            else{
               ans[k--] =nums[high]*nums[high];
                high--;
            }
        }
        return ans;
    }

};