class Solution {
public:
 int poorPigs(int buckets, int poisonTime, int totalTime) {
   int p=totalTime / poisonTime;
        return ceil(log(buckets) / log(p + 1));
        
    }
};