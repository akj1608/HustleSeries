class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int n=s.size();
       int i=0,
        j=n-1;
        char str;
        while(i<j){
            
            str=s[i];
            s[i]=s[j];
            s[j]=str;
            i++;
            j--;
            
        }
    }
};