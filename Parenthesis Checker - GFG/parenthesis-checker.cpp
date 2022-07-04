// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
   bool ispar(string x)
    {
        stack<char> st;
        for(int i=x.length()-1;i>=0;i--)
        {
            if(!st.empty())
            {
                char tops=st.top();
                if(tops==')' && x[i]=='(')
                st.pop();
                else if(tops=='}' && x[i]=='{')
                st.pop();
                else if(tops==']' && x[i]=='[')
                st.pop();
                else st.push(x[i]);
            }
            else st.push(x[i]);
        }
        return st.empty();
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends