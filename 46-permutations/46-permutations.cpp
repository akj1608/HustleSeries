class Solution {
public:
    void gen(vector<int>& ds,vector<int>& nums,vector<vector<int>>& res,int freq[])
    {
        if(ds.size()==nums.size())
        {
            res.push_back(ds);
            return;
        }
      for(int i=0;i<nums.size();i++)
      {
          if(!freq[i])
          {
              ds.push_back(nums[i]);
              freq[i]=1;
              gen(ds,nums,res,freq);
              freq[i]=0;
              ds.pop_back();
          }
      }
        
     }
    
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<int>ds;
        vector<vector<int>>res;
       int freq[n];
        for(int i=0;i<n;i++)
            freq[i]=0;
        
        gen(ds,nums,res,freq);
        return res;
        
        
    }
};