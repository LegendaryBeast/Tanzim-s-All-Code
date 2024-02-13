#include<bits/stdc++.h>
using namespace std;
int const N=1e5+2;
vector<pair<int,long long int>>g[N];
long long int dis[N];
int par[N];
 
void bfs(int s)
{
    priority_queue<pair<long long int,int>,vector<pair<long long int,int>>,greater<pair<long long int,int>>>q;
    q.push({0,s});
    dis[s]=0;
    par[s]=-1;
    while(!q.empty())
    {
        auto temp=q.top();
        int ver=temp.second;
        long long int wtt=temp.first;
        q.pop();
        if(par[ver]==0)continue;
        for(auto child:g[ver]){
            int c_v=child.first;
            long long int c_w=child.second;
            if(dis[ver]+c_w<dis[c_v]){
                dis[c_v]=dis[ver]+c_w;
                q.push({dis[c_v],c_v});
                par[c_v]=ver;
            }
        }
    }
}
 
 
int main()
{
        int v,e;cin>>v>>e;
        for(int i=0;i<N;i++){
            dis[i]=LLONG_MAX;
            par[i]=0;
        }
        while(e--){
            int x,y;
            long long w;cin>>x>>y>>w;
            g[x].push_back({y,w});
            g[y].push_back({x,w});
        }
        bfs(1);
        stack<int>st;
        int temp=v;
        if(dis[v]==LLONG_MAX){cout<<-1<<endl;return 0;}
        while(temp!=-1){
            st.push(temp);
            temp=par[temp];
        }
        while(!st.empty()){
        int gg=st.top();
        st.pop();
        cout<<gg<<" ";
        }
        cout<<endl;;
    
}
