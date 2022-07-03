class Solution {
public:
    double myPow(double x, long long n) {
        
       if(n>=0)
       {
             if(n==0) return 1;
        
        if(n==1) return x;
           
            if(n % 2 == 0) {
                double temp = myPow(x, n/2LL);
                return (temp*temp);
            }
        
        else
        {
            return x*myPow(x,n-1);
        }
       }
        else
        {
           return 1.0/myPow(x,-n) ;
        }
        
        
    }
};