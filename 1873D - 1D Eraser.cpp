#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
        int n; cin >> n;
        while(n--)
        {
        int l , k ; cin >> l >> k;
        string s;
        cin >> s;
        int ans = 0;
          
        for(int i = 0; i < l; i++){
            if(s[i] == 'B'){
            ans += 1;
            i += k - 1;
        }
        }
        cout << ans << endl;
    
    }
}
