#include<bits/stdc++.h>
using namespace std;

#define int                 long long
#define ll                  long long
#define endl                '\n'
#define F                  first
#define S                  second
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
const int N = 2e3+10;
int par[N];

void make(int v){
    par[v]=v;
}

int find(int v){
    if(par[v]==v)return v;
    else return par[v] = find(par[v]);
}

void Union(int u, int v){
    u=find(u);
    v=find(v);
    if(u != v){
        par[v] = u;
    }
}
void solve()
{
    int n; cin >> n;
    
    vector <pair<int,int>> cities(n+1);
    for(int i=1;i<=n; i++){
        cin >> cities[i].F >> cities[i].S;
    }
    
    vector <int> c(n+1),k(n+1);
    
    for(int i=1;i<=n; i++){
        cin >> c[i];
    }
    for(int i=1;i<=n; i++){
        cin >> k[i];
    }
    vector<pair<int,pair<int,int>>> edges;
    for(int i=1;i<=n;i++){
        edges.pb({c[i],{0,i}});
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int dist = abs(cities[i].F-cities[j].F)+abs(cities[i].S-cities[j].S);
            int cost = dist*1LL*(k[i]+k[j]);
            edges.pb({cost,{i,j}});
        }
    }
    for(int i=0;i<=n;i++){
        make(i);
    }
    int total_cost = 0;
    sort(all(edges));
    vector <int> polls;
    vector <pair<int,int>> connections;
    for(int i = 0 ; i < edges.size();i++){
        int u = edges[i].S.F;
        int v = edges[i].S.S;
        if(find(u)==find(v))continue;
        Union(u,v);
        total_cost += edges[i].F;
        if(u == 0 || v == 0){
            polls.pb(max(u,v));
        }
        else{
            connections.pb({u,v});
        }
    }
    cout << total_cost << endl;
    cout << polls.size() << endl;
    for(auto x : polls){
        cout<<x<<" ";
    }
    cout << endl;
    cout << connections.size()<<endl;
    for(auto x : connections){
        cout << x.F << " " << x.S << endl;
    }
}

int32_t main()
{
    FAST_IO;
    int TC = 1;
    //cin >> TC;
    while (TC--) solve();
}


