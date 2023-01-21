//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        long long int start=1, end=x/2;
       long long int ans;
        if(x==1 || x==0) return x;
        while (start<=end)
        {
            long long int mid=start+(end-start)/2;
            
            long long int sqr=mid*mid;
            if(sqr==x)
            {
                return mid;
            }
            
            if(sqr<=x)
            {
                start=mid+1;
                ans=mid;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends