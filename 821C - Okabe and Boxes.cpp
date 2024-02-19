#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    stack<int>st;
    int ans=0;
    int p=1;
    int n=2*t;
    while(n--)
    {
        string s;
        cin >> s;
        if(s=="add"){
            int x;cin>>x;
            st.push(x);
     }
        else
        {
    			if(!st.empty())
          {
    			  int val =st.top();
    			  if(val!=p)
            {
    				  ans++;
    				  while(!st.empty())st.pop();
    			  }
    			  else if(val==p) 
            {
    			  if(!st.empty())st.pop();
    			  }
    			
		      }
          p++;
        }
    }
    cout<<ans<<endl;
}
