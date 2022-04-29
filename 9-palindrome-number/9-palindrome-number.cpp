class Solution {
public:
    bool isPalindrome(int x) {
      
        long long rev=0;
        long long tmp=x;
                
        
      if(x>0){
        
            while(x!=0)
            {
                int num=x%10;
                rev=(rev*10)+num;
                x/=10;
            }
    }
        
        if(tmp==rev)
        {
            return true;
            
        }
        else{
            return false;
        }
    
            
    }
};