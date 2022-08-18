class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        vector<int> a;
        a.push_back(1);
        int k = 0; 
        sort(arr.begin(), arr.end(), greater<int>());
        for (int i=1; i<n; i++)
        {
            if(arr[i] == arr[i-1])
            {
                a[k] = a[k]+1;
            }
            else
            {
                a.push_back(1);
                k++;
            }
        }
        int b = k+1;
        sort(a.begin(), a.end(), greater<int>());
        int ans = 1;
        int sum = 0;
        for(int i=0; i<b; i++)
        {
            sum = sum + a[i];
            if(sum >= n/2)
            {
                break;
            }
            else
                ans = ans + 1;
        }
        return ans;
        
    }

};