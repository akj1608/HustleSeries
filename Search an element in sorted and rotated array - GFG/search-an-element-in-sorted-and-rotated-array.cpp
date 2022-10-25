//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> ,int );

//User code will be pasted here

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector<int> vec(n);
        
        for(int i =0;i<n;i++) 
            cin >> vec[i];
        
        int target;
        cin >> target;
        
        cout << Search(vec,target) << "\n";
         
    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find 
int Search(vector<int> arr, int k) {
    //code here
    int n=arr.size();
    int low=0;
    int high=n-1,mid;
    
    while(low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==k) return mid;
        
        if(arr[low]<arr[mid] )// left side is sorted
        {
            if(arr[low]<=k && k<arr[mid]) // if k is in left side
            {
                high=mid-1;
                
            }
            else{//right side is sorted
                low=mid+1;
            }
            
        }else{
            if(arr[mid]<k && k<=arr[high])
            {
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            
        }
       
    }
    return-1;
}