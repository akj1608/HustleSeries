class Solution {
public:
    int findMin(vector<int>& arr) {
       int n=arr.size();
        int x=arr[0];
        for(int i=0;i<n;i++)
        {
            if(x>arr[i])
            {
                x=arr[i];
            }
        }
        return x;
    }
};