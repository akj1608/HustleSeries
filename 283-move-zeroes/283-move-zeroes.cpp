class Solution {
public:
    
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
       int count =0;
        vector<int>v;
         for(int i=0;i<n;i++)
         {
             if(arr[i]==0)
             {
                 count++;
             }
             
             if(arr[i]!=0)
             {
                 v.push_back(arr[i]);
             }
         }
        while(count>0)
        {
            v.push_back(0);
            count--;
        }
        arr.clear();
        
        for(int i=0;i<n;i++)
        {
            arr.push_back(v[i]);
        }
    }
};