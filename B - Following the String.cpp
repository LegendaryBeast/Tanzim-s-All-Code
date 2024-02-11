#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector <int> hash(26,0);
    string ans= "";
    for(int i = 0;i < n ; i++)
    {
       for(int j = 0 ;j < 26 ; j++ )
       {
           if(arr[i] == hash[j])
           {
               ans += char(97+j);
               hash[j]++;
               break;
           }
       }
    }
    cout<<ans<<"\n";
    
}
 
int main() 
{
  int t;cin>>t;
  while(t--)
  {
      solve();
  }
}
