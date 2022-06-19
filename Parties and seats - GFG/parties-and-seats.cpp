// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    //Your code here
    int max=*max_element(seats,seats+n);
    pair<char,int> pr;
    map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[party[i]]=seats[i];
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<max<<endl;
    
    
}

// { Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		}
}  // } Driver Code Ends