class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int low=0;int high=n-1;
        
        vector<int>temp;
    for(int i=0;i<n;i++)
    {
       temp.push_back(nums[i]*nums[i]);
    }
        
        sort(temp.begin(),temp.end());
      
        return temp;
    }

};