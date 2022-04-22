class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int left=0, right=num/2;
        
        if(num==1 || num==2)
        {
            return num;
        }
        else{
            long long int mid,x=0;
            
            while(left<=right)
            {
                mid=(left+right)/2;
                 x=mid*mid;
                if(x==num)
                {
                    return true;
                }
                else if(x<num)
                {
                    left=mid+1;
                        
                }
                else if(x>num){
                    right=mid-1;    
                }
                
            }
            return false;
            
            
        }
    }
};