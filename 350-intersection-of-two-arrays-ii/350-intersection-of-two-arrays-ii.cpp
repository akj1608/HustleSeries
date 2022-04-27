class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        map<int,int>mp;
        
        vector<int>ans;
        
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        
        
        for(int j=0;j<nums2.size();j++)
        {
            auto it =mp.find(nums2[j]);
            
            
            if(it!=mp.end()  && it->second>0)
            {
                ans.push_back(nums2[j]);
                it->second--;
            }
        }
        return ans;
    }
};