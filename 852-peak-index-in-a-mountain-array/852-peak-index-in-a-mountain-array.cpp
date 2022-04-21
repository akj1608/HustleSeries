class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int i=0,n=arr.size();
        int j=n-1;
        
        while(i<=j) // By Using Binary Search
        {
            int mid=(i+j)/2;
            if(arr[mid]<arr[mid+1]) // If mid index element is smaller than mid+1 index element then required index will be on the right of mid.
            i=mid+1;
            else    // else the required element will be on the left.
            j=mid-1;
        }
        return i;
    }
};