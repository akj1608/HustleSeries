class Solution {
public:
    void generate(vector<int>& nums,int idx,  vector<int>subset,vector<vector<int>>& ans)
    {   
        
       
        
        if(idx>=nums.size())
        {
            ans.push_back(subset);
            return;
                
        }
     //excluding the element
     
      generate(nums,idx+1,subset,ans);
        
       //including the ith element
     int element=nums[idx];
     subset.push_back(element);
      
     generate(nums,idx+1,subset,ans);
         
         //not taking ith element
       
     
    }
    
    
    
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
       
       vector<vector<int>>ans;
       vector<int>subset;
      int idx=0;
        
        generate(nums,idx,subset,ans);
        return ans;
        
        
    }
};