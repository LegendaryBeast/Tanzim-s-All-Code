#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve ()
{
    int n, m; cin >> n >> m;

    vector <int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int l = 1, h = 1e9;

    int best = 1;

    while (l <= h)

    {
        int mid = (l + h) >> 1;

        int cnt = 1;

        for (int i = 0; true; )
        {
            int nxt = lower_bound(v.begin(), v.end(), v[i] + mid) - v.begin();

            if (nxt < n) {cnt++; i = nxt;}
            else break;
        }

        if (cnt >= m) {
            best = max(best, mid);
            l = mid + 1;
        }
        else {
            h = mid - 1;
        }
    }

    cout <<best <<"\n";


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

