#include<bits/stdc++.h>
using namespace std;
 
#define int                 long long
#define ll                  long long
#define endl                '\n'
#define F                   first
#define S                   second
#define pb                  push_back
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define yes                 cout<<"YES"<<endl
#define no                  cout<<"NO"<<endl
#define PI                  3.141592653589793238
#define INF                 LONG_LONG_MAX
#define MOD                 1e9+7
#define in(a,n)             for(int i = 0; i < n; i++)cin >> a[i]
#define f(i,n)              for(int i = 0; i < n; i++)
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));
 
ll fact(ll n)          { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)     { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)     { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)     { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)     { return (a * b) / gcd(a, b);}
ll mypow(ll a, ll b)   { ll ans = 1; while(b){ if (b&1) ans = (ans*a) ; b /= 2; a = (a*a); } return ans; }
bool isPrime(ll n)     { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
const int N=1e3+10;
char mat[N][N];
int vis[N][N];
int mx[]={1,-1,0,0};
int my[]={0,0,1,-1};
 
void dfs(int x, int y,int n,int m){
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int nx=x+mx[i];
        int ny=y+my[i];
        if(nx>=0 && nx<n && ny>=0 && ny<m &&mat[nx][ny]=='.'&& vis[nx][ny]==0)dfs(nx,ny,n,m);
    }
}
void solve()
{
    int m,n; cin >> n >> m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!vis[i][j]&&mat[i][j]=='.'){dfs(i,j,n,m);count++;}
        }
    }
    cout << count <<endl;
}
 
int32_t main()
{
    FAST_IO;
    int TC = 1;
    //cin >> TC;
    while (TC--) solve();
}
