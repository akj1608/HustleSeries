//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int M)
    {
        // code here
        int rupiya[]={1, 2, 5, 10, 20, 50, 100, 200, 500, 2000 };
        
        int n=sizeof(rupiya)/sizeof(rupiya[0]);
           
           
           vector<int>res;   
            
            for(int i=n-1;i>=0;i--)
            {
                while(M>=rupiya[i])
                {
                    M=M-rupiya[i];  //43-20   //23  //23-20 //3  //2
                    res.push_back(rupiya[i]);
                }
            }
            return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends