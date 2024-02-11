#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve ()
{
    int n ; cin >> n;
    vector <int> a(n), f(n), b(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    f[0] = 0;
    f[1] = 1;
    
    for(int i = 2; i < n; i++)
    {
        if( abs(a[i] - a[i-1]) < (i-2>=0 ? abs (a[i-1] - a[i-2]) : 1e9) )
        {
            f[i] = f[i-1] + 1;
        }
        
        else f[i] = f[i-1] + abs(a[i-1] - a[i]);
    }
    
    b[n-1] = 0;
    b[n-2] = 1;
 
    for(int i = n-3; i >= 0; i--)
    {
        if( abs(a[i+1] - a[i]) < abs (a[i+1] - a[i+2]) )
        {
            b[i] = b[i+1]+1;
        }
        
        else b[i] = b[i+1] + abs(a[i+1] - a[i]);
    }
    
    // for ( int i = 0; i < n; i++)
    // {
    //     cout<< f[i]<< " ";
    // }
    
    int q; cin >> q;
    while(q--)
    {
        int x, y; cin >> x >> y;
        if ( y > x)cout << f[y-1] - f[x-1] << '\n'; 
        else cout << abs(b[x-1] - b[y-1]) << '\n';
    }
    
}


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int t; cin >> t;

    while (t--)
    {
        solve();
    }


}
