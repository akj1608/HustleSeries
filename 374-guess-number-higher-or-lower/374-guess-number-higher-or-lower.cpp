/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int low =0;
        int high=n;
        int pick =0;
        int mid;
        
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            pick=guess(mid);
            if(pick==0)
            {
                return mid;
            }
            else if(pick==1)
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return pick;
        
    }
};