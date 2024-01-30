#include<bits/stdc++.h>
using namespace std;
int const N=3;
int mat[N][N];
int vis[N][N];
int tim[N][N];
int mx[]={1,-1,0,0};
int my[]={0,0,1,-1};

void bfs(){
    
    queue<pair<int,int>>q;
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(mat[i][j]==2){
                q.push({i,j});
                vis[i][j]=1;
                tim[i][j]=0;
            }
        }
    }
    while(!q.empty()){
        int x=q.front().first;
        int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nx=x+mx[i];
            int ny=y+my[i];
            if(nx>=0 && nx<N && ny>=0 && ny<N && !vis[nx][ny] && mat[nx][ny]==1){
                vis[nx][ny]=1;
                tim[nx][ny]=tim[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
}

int main(){
    for(int i=0;i < N ;i++){
        for(int j=0; j < N ;j++){
            cin >>mat[i][j];
        }
    }
    
    bfs();
    int t=0;
     for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(t<tim[i][j])t=tim[i][j];
        }
    }
    cout<<t<<endl;
    
}
