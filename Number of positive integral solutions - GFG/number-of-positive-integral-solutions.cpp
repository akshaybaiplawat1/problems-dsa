// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends



#include<bits/stdc++.h>
class Solution{
public:
   long ncr(int n,int r)
   {
       if(n<r)return 0;
       if(n-r<r)r=n-r;
       
       int dp[r+1];
       memset(dp,0,sizeof(dp));
       dp[0]=1;
       
       for(int i=1;i<=n;i++)
       {
           for(int j=min(i,r);j>0;j--)
           {
               dp[j] = dp[j]+dp[j-1];
           }
       }
       return dp[r];
   }
   long posIntSol(string s)
   {
       long n = 0;
       long k = 0;
       
       int i=s.size()-1;
       while(i>=0)
       {
           if(s[i]=='=')break;
           i--;
       }
       i++;
       k = stoi(s.substr(i,s.size()-i));
       n = i/2;
      
       k--;
       n--;
       if(k<=1 || k<n)return 0;
       if(k==n)return 1;
       return ncr(k,n);
   }
};
// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.posIntSol(s)<<endl;
    }
    return 0;
}
  // } Driver Code Ends