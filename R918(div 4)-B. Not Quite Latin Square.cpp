#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        char arr[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
            }
        }
        int ac=0,bc=0,cc=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(arr[i][j]=='A')ac++;
                if(arr[i][j]=='B')bc++;
                if(arr[i][j]=='C')cc++;
            }
        }
       if(ac==2)cout<<'A'<<endl;
       else if(bc==2)cout<<'B'<<'\n';
       else cout<<'C'<<'\n';
       
    }
}
