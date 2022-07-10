class Solution {
public:
    void generate(vector<int>& arr, vector<int>ds, vector<vector<int>>& ans,int idx,int target)
    {
        int n=arr.size();
        if(idx==n)
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
            generate(arr,ds,ans,idx,target-arr[idx]);
            ds.pop_back();
        }
        
        generate(arr,ds,ans,idx+1,target);
    }
    
    
    
    
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        generate(arr,ds,ans,0,target);
        return ans;
    }
};