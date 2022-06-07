class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        //taking a new vector
        
        vector<int>arr;
        
        for(int i=0;i<m;i++)
        {
            arr.push_back(nums1[i]);
        }
         for(int i=0;i<n;i++)
        {
            arr.push_back(nums2[i]);
        }
        
        nums1.clear();
       
         copy(arr.begin(), arr.end(), back_inserter(nums1));
        
        sort(nums1.begin(),nums1.end());
        
    }
};