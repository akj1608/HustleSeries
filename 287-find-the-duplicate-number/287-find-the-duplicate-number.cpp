class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
      
      int n=nums.size(),dup=0;
      map<int,int>mp;
      
      for(int i=0;i<n;i++)
      {
        mp[nums[i]]++;
      }
      
      
       for(auto i: mp)
       {
        if(i.second>1)
        {
          dup=i.first;
          break;
        }
       }
      
      return dup;
      
    }
};