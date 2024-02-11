#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int x, y, k;
    cin >> x >> y >> k;
    
    int a[x],b[y];
    set <int> s1,s2,st;
    
    for(int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < y; i++)
    {
        cin >> b[i];
    }
    // divide into 3 chatagory only in a,only int b, in both---
    for(int i=0;i<x;i++)
    {
        if(a[i]<=k)s1.insert(a[i]);
    }
    for(int i=0;i<y;i++)
    {
        if(b[i]<=k)s2.insert(b[i]);
    }
    int count=0;
    vector <int> v;
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        auto itt = s2.find(*it);
        if(itt!=s2.end())
        {
            st.insert(*itt);
            v.push_back(*itt);
        }
    }
    for ( auto x : v)
    {
        s1.erase(x);
        s2.erase(x);
    }
    int size = min(s1.size(),s2.size());
    int sz = st.size();
    //cout << size <<" "<<sz<<" ";
    
    if(size + sz < k/2 )cout<<"NO"<<endl;
    
    else {
        int flag = 1;
        for(int i=1;i<=k;i++)
        {
            if(s1.find(i)==s1.end() && s2.find(i)==s2.end() && st.find(i)==st.end())
            {
                flag=0;
                break;
            }
        }
        if(flag)cout<<"YES"<<'\n';
        else cout<<"NO"<<endl;
    }
}
 
int main() 
{
  int t;cin>>t;
  while(t--)
  {
      solve();
  }
}
