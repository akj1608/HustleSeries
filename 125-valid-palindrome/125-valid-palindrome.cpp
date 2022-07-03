class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string sen= "";
        for(int i=0;i<n;i++) {
            if(isalnum(s[i])) {
               sen += tolower(s[i]);
            }
        }
        int size = sen.size();
        int i=0, j=size-1;
        while(i<=j) {
            if(sen[i++]!=sen[j--]) return false;
            
        }
        return true;
    }
};