class Solution {
public:
    int removePalindromeSub(string s) {
        
        int n=s.size();
      int low=0;
        int high=n-1;
        
        
        while(low<high)
        {
            if(s[low]!=s[high]) return 2;
            
            low++;
            high--;
            
        }
        
        
        return 1;
        
        
     
        
    }
};