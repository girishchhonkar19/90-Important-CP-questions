// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
   vector<int>ans;
   bool present=binary_search(arr,arr+n,x);
   if(present)
   {
       auto it = lower_bound(arr,arr+n,x);
       ans.push_back(it-arr);
       
       auto it1 = upper_bound(arr,arr+n,x);
       ans.push_back(it1-arr-1);
   }
   
   else{
       ans.push_back(-1);
       ans.push_back(-1);
   }
  return ans;
}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends