// { Driver Code Starts
//Initial Template for C++




#include<bits/stdc++.h>
using namespace std;


int minimum_apple(int arr[], int n);


int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        int ans;
        ans = minimum_apple(arr, n);
        cout << ans << "\n";
        
    }

}

// } Driver Code Ends


//User function Template for C++


int minimum_apple(int arr[], int n){
    // Complete the function
    unordered_set<int> men;
    for(int i=0;i<n;i++){
        men.insert(arr[i]);
    }
    return men.size();
}
