//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        int low=0;
        int high=n-1,mid;
        
        while(low<=high)
        {
            mid=low+(high-low)/2;
            
            if(mid==0 || arr[mid-1]>arr[mid])
            {
                return arr[mid];
            }
           if( arr[low]>arr[mid])
           {
               high=mid-1;
           }
           else if(arr[mid]>arr[high])
           
           {
             low=mid+1;
           }
           else
           return arr[low];
        }
        
        return -1;
    }
};

//{ Driver Code Starts.


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution ob;
		cout<<ob.findMin(a, n)<<endl;
	}
	return 0;
}
// } Driver Code Ends