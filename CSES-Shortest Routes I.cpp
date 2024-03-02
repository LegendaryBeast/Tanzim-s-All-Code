#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N=1e5+10;

vector<pair<ll,ll>> wt[N];
bool vis[N];
ll dis[N];

void djastra(){
    for(ll i=0;i<N;i++){
        dis[i]=LLONG_MAX;
        vis[i]=0;
    }
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    pq.push({0,1});
    dis[1]=0;
    
    while(!pq.empty()){
        ll V = pq.top().second;
        pq.pop();
        
        if(vis[V])continue;
        vis[V]=1;
      
        for(auto [c_v,c_w] : wt[V]){
            
            if(dis[V]+c_w<dis[c_v]){
                dis[c_v]=dis[V]+c_w;
                pq.push({dis[c_v],c_v});
            }
        }
    }
}

int main(){
    ll n,e;
    cin >> n >> e;
    while(e--){
        ll x,y,w;
        cin>>x>>y>>w;
        wt[x].push_back({y,w});
    }
    djastra();
    for(ll i=1;i<=n;i++)cout<<dis[i]<<" ";
}
