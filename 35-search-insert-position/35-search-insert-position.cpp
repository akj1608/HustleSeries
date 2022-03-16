class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=(low+high)>>1;
            if(target==arr[mid]) return mid;
            else if(target<arr[mid])
            {
                high=mid-1;
            }
             else if(target>arr[mid])
            {
                low=mid+1;
                 
            }
        }
        return low;
        
    }
};