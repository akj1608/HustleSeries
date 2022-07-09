class Solution {
public:
    void generate(vector<int>& nums,int idx,  vector<int>& subset,vector<vector<int>>& ans)
    {   int n=nums.size();
        
       
        
        if(idx==n)
        {
            ans.push_back(subset);
            return;
                
        }
       //including the ith element
     subset.push_back(nums[idx]);
     generate(nums,idx+1,subset,ans);
         
         //not taking ith element
         subset.pop_back();
      generate(nums,idx+1,subset,ans);
        
    }
    
    
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>subset;
       vector<vector<int>>ans;
        
        generate(nums,0,subset,ans);
        return ans;
        
        
    }
};