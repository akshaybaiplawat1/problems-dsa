// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	     int col[V] = {0};
        for (int k = 0; k < V; k++)
        {
            if (col[k] == 0)
            {
                col[k] = 1;
                queue<int> q;
                q.push(k);
                while (q.size() > 0)
                {
                    int i = q.front();
                    q.pop();
                    int pc = col[i];
                    for (int j : adj[i])
                    {
                        if (col[j] == 0)
                        {
                            q.push(j);
                            if (pc == 1)    col[j] = 2;
                            if (pc == 2)    col[j] = 1;
                        }
                        else if (col[j] == pc)  return false;
                    }
                }
            }
        }
        return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends