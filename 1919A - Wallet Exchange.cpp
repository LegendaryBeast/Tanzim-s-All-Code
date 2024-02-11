#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int x, y;
    cin >> x >> y;
    
    if((x+y)%2)cout<<"Alice"<<endl;
    
    else cout << "Bob" << endl;
}
 
int main() 
{
  int t;cin>>t;
  while(t--)
  {
      solve();
  }
}
