class Solution {
public:
    
    void generate(vector<int>& ds,vector<int>& arr,vector<vector<int>>& ans,int idx,int target)
    {
        if(idx==arr.size())
        {
            if(target==0)
            {
                ans.push_back(ds);
            }
            return;
        }
        
        if(arr[idx]<=target)
        {
            ds.push_back(arr[idx]);
            generate(ds,arr,ans,idx,target-arr[idx]);
            ds.pop_back();
        }
        
        generate(ds,arr,ans,idx+1,target);
    }
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int>ds;
        
        generate(ds,candidates,ans,0,target);
        return ans;
        
    }
};