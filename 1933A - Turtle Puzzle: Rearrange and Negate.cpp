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

void solve()
{
    int n; cin >> n;
    vector <int> v(n,0);
    in(v,n);
    int sum=0;
    f(i,n)sum+=abs(v[i]);
    cout<<sum<<endl;
}

int32_t main()
{
    FAST_IO;
    int TC = 1;
    cin >> TC;
    while (TC--) solve();
}



