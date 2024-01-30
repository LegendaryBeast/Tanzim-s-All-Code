#include<bits/stdc++.h>
using namespace std;
int const N=4;
int mat[N][N];
int vis[N][N];
int mx[]={-1,0,1,0};
int my[]={0,-1,0,1};
vector<pair<int,int>>gg;

void dfs(int sx,int sy,int x0,int y0){
    
    vis[sx][sy]=1;
    gg.push_back({sx-x0,sy-y0});
        for(int i=0;i<4;i++){
            int nx=sx+mx[i];
            int ny=sy+my[i];
            if(nx>=0 && nx<N && ny>=0 && ny<N && !vis[nx][ny] && mat[nx][ny]==1){
                dfs(nx,ny,x0,y0);
            }
        }
}

int main(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >>mat[i][j];
        }
    }
    set<vector<pair<int,int>>>st;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(vis[i][j]==0 && mat[i][j]==1){
            dfs(i,j,i,j);
            st.insert(gg);
            gg.clear();
            }
        }
    }
    cout<<st.size()<<endl;
    
}
// 1 1 1 0
// 1 0 0 0
// 1 0 0 1
// 1 0 1 0
