// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this method*/

// arr[] : the input array containing 0s and 1s
// N : size of the input array

// return the maximum length of the subarray
// with equal 0s and 1s
class Solution{
  public:
    int maxLen(int a[], int n)
    {
        // Your code here
        int pri[n],sum=0;
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++){
            if(a[i]==0)
            sum-=1;
            else
            sum+=1;
            pri[i]=sum;
        }
        mp[0].push_back(-1);
        for(int i=0;i<n;i++){
            if(mp.find(pri[i])==mp.end()){
                mp[pri[i]].push_back(i);
            }else{
                mp[pri[i]].push_back(i);
            }
        }
        int ans=0;
        for(auto it:mp){
            vector<int> v=it.second;
            ans=max(ans,v[v.size()-1]-v[0]);
        }
        return ans;
        
    }
};


// { Driver Code Starts.

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.maxLen(a, n) << endl;
    }
    return 0;
}  // } Driver Code Ends