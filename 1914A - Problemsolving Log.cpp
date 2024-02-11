#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define c(x) scanf("%d",&x)
#define o(x) printf("%d\n",x)
#define cin(x,y) scanf("%d %d",&x, &y)
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;;
    while(t--){
        int jadu[26];
        for(int i=0;i<26;i++)jadu[i]=-1;
        int g;cin>>g;
        string s;cin>>s;
        
        int count = 0;
        
        for(int i=0;i<g;i++){
            int x = s[i] - 65;
            if(jadu[x]==-1)jadu[x]=0;
            jadu[x]++;
        }
        for(int i=0;i<26;i++){
 
            if(jadu[i]>i)count++;
 
        }
        
        cout<<count<<endl;
    }
}
