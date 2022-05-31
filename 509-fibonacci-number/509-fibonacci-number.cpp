class Solution {
public:
   int fib(int n) {
    if(n==0)return 0;
    if(n<=2)return 1;
    static unordered_map<int,int>memo;
    auto it=memo.find(n);
    if(it!=memo.end())return it->second;
    memo[n]=fib(n-1)+fib(n-2);
    return memo[n];
}
};