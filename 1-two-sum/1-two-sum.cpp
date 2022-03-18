class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n= arr.size(),ans=0,res=0;
        vector<int> result;
        
        int i=0,j=n-1,k=n-1;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==target)
                {
                    result.push_back(i);
                     result.push_back(j);
                    break;
                    
                }
            }
        }
        return result;
    }
};