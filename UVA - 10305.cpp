#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> ans;
vector<vector<int>> adj;
vector <bool> vis;
int n,m;


void dfs(int s){
    vis[s]=1;
    for(auto c : adj[s]){
        if(!vis[c])dfs(c);
    }
    ans.push_back(s);
}

void toposort(){
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])dfs(i);
    }
    reverse(ans.begin(),ans.end());
    for(int i = 0; i < n; i++) {
            cout << ans[i];
            if(i!=n-1) cout << ' ';
        }
        cout << '\n';
}

int main()
{
    while(cin >> n >> m, n != 0 || m != 0){
        ans.clear();
        adj.clear();
        vis.clear();
        adj.resize(n+1);
        vis.assign(n+1,0);
        while(m--){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        }
    toposort();
    }
}
