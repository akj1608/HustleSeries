class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n= arr.size(),ans=0,res=0;
        vector<int> result;
        
        int i=0,j=n-1,k=n-1;
        
        while(i<j)
        {
            if(arr[i]+arr[j]>target) j--;
            else if(arr[i]+arr[j]<target) i++;
            else
            {
               result.push_back(i+1) ;
                result.push_back(j+1) ;
                break;
            }
        }
        return result;
        
        
    }
};