// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
  void dfs(int node,vector<int>adj[],int d,int &cnt)
   {
       
       if(node==d) {cnt++; return;}
       
       for(auto it:adj[node])
       {
           
           dfs(it,adj,d,cnt);
       }
       
   }
int possible_paths(vector<vector<int>>edges, int n, int s, int d){
    vector<int>adj[n];
    for(int i=0;i<edges.size();i++){
        adj[edges[i][0]].push_back(edges[i][1]);
    }
    int cnt=0; 
    vector<int>vis(n,0);
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0 && i==s) dfs(i,adj,d,cnt);
    }
    return cnt;
}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m, s, d;
		cin >> n >> m >> s >> d;
		vector<vector<int>>edges;
		for(int i = 0; i < m; i++){
			int u, v;
			cin >> u >> v;
			edges.push_back({u,v});
		}
		Solution obj;
		int ans = obj.possible_paths(edges, n, s, d);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends